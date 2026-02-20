/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Object
*/

#include "Object.hpp"

Object::Object()
{
}

Object::~Object()
{
}

void Object::isTaken()
{
}

bool Object::getTaken() const
{
    return false;
}

std::ostream& operator<<(std::ostream& stream, const Object& obj)
{
    if (obj.getTaken())
        stream << "Obj is taken";
    else
        stream << "Obj isn't taken";
    return stream;
}
