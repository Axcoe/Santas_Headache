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

void Object::wrapMeThat(Object *obj)
{
}

bool Object::getTaken() const
{
    return false;
}

void Object::print(std::ostream& os) const
{
    os << "This is an object.";
}

std::ostream& operator<<(std::ostream& stream, const Object& obj)
{
    obj.print(stream);

    // if (obj.getTaken())
    //     stream << "Obj is taken";
    // else
    //     stream << "Obj isn't taken";
    return stream;
}
