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
        std::cout << "Giftpaper has now an object in !" << std::endl;
    } else {
        std::cerr << "The giftpaper is already fill and can't wrap an object." << std::endl;
    }
}

void Giftpaper::print(std::ostream& os) const
{
    if (_isEmpty == true && _isOpen == true) {
        os << "Giftpaper is empty and open.";
    } else if (_isEmpty == false && _isOpen == true) {
        os << "Giftpaper is not empty and open.";
    } else if (_isEmpty == false && _isOpen == false) {
        os << "Giftpaper is not empty and close.";
    } else {
        os << "Giftpaper is empty and close.";
    }
}

std::ostream& operator<<(std::ostream &stream, const Giftpaper &gp)
{
    stream << (gp.getEmpty() ? "Giftpaper is empty." : "Giftpaper is not empty.");
    stream << (gp.getOpen() ? "Giftpaper is open." : "Giftpaper is open.");

    return stream;
}
