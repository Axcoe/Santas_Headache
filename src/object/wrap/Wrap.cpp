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