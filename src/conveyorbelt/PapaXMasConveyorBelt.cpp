/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** PapaXMasConveyorBelt
*/

#include "PapaXMasConveyorBelt.hpp"

PapaXMasConveyorBelt::PapaXMasConveyorBelt()
{
}

void PapaXMasConveyorBelt::putOnConveyor(Object *obj)
{
    if (_isEmpty == true) {
        _obj = obj;
        _isEmpty = false;
    } else {
        std::cerr << "Can't put an object on the conveyor belt, no place." << std::endl;
    }
}

Object *PapaXMasConveyorBelt::takeFromConveyor()
{
    if (_obj == nullptr) {
        std::cout << "Nothing on the conveyor belt." << std::endl;
    }
    _isEmpty = true;
    return _obj;
}

void PapaXMasConveyorBelt::in()
{
    if (_isEmpty == true) {
        _obj = new Wrap;
        _isEmpty = false;
    } else {
        std::cerr << "Can't 'in' a wrap, no place." << std::endl;
    }
}

void PapaXMasConveyorBelt::out()
{
    if (_isEmpty == false) {
        delete _obj;
        _isEmpty = true;
    } else {
        std::cerr << "Can't 'out', nothing on a the coveyor belt." << std::endl;
    }
}