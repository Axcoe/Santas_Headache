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
    if (_isEmpty == true || _isOpen == true) {
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