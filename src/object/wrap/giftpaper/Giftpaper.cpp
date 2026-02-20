/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Giftpaper
*/

#include "Giftpaper.hpp"
#include <iostream>

Giftpaper::Giftpaper()
{
}

Giftpaper::~Giftpaper()
{
}

void Giftpaper::wrapMeThat(Object *obj)
{
    if (_isEmpty == true) {
        _obj = obj;
        _isEmpty = false;
    } else {
        std::cerr << "The giftpaper is already fill and can't wrap an object." << std::endl;
    }
}