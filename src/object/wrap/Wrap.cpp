/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Wrap
*/

#include "Wrap.hpp"
#include <iostream>

Wrap::Wrap()
{
}

Wrap::~Wrap()
{
}

void Wrap::openMe()
{
    if (_isOpen == false) {
        _isOpen = true;
        _obj = nullptr;
        _isEmpty = true;
    } else {
        std::cout << "The wrap is already open." << std::endl;
        _obj = nullptr;
        _isEmpty = true;
    }
}

bool Wrap::getEmpty() const
{
    return _isEmpty;
}

bool Wrap::getOpen() const
{
    return _isOpen;
}

void Wrap::print(std::ostream& os) const
{
    if (_isEmpty == true && _isOpen == true) {
        os << "Wrap is empty and open.";
    } else if (_isEmpty == false && _isOpen == true) {
        os << "Wrap is not empty and open.";
    } else if (_isEmpty == false && _isOpen == false) {
        os << "Wrap is not empty and close.";
    } else {
        os << "Wrap is empty and close.";
    }
}
