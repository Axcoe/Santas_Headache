/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Box
*/

#include "Box.hpp"
#include <iostream>

Box::Box()
{
}

Box::~Box()
{
}

void Box::wrapMeThat(Object *obj)
{
    if (_isEmpty == true && _isOpen == true) {
        std::cout << "Box has now an object in !" << std::endl;
        _obj = obj;
        _isEmpty = false;
    } else if (_isEmpty == false) {
        std::cerr << "The box is already fill and can't wrap an object." << std::endl;
    } else {
        std::cerr << "The box is closed and can't wrap an object." << std::endl;
    }
}

void Box::closeMe()
{
    if (_isOpen == true) {
        _isOpen = false;
    } else {
        std::cout << "The wrap is already closed." << std::endl;
    }
}

void Box::print(std::ostream& os) const
{
    if (_isEmpty == true && _isOpen == true) {
        os << "Box is empty and open.";
    } else if (_isEmpty == false && _isOpen == true) {
        os << "Box is not empty and open.";
    } else if (_isEmpty == false && _isOpen == false) {
        os << "Box is not empty and close.";
    } else {
        os << "Box is empty and close.";
    }
}
