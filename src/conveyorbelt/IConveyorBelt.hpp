/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** IConveyorbelt
*/

#ifndef ICONVEYORBELT_HPP_
#define ICONVEYORBELT_HPP_

#include <iostream>
#include "../object/Object.hpp"
#include "../object/wrap/Wrap.hpp"

class IConveyorBelt {
    public:
        virtual ~IConveyorBelt() = default;

        virtual void putOnConveyor(Object *obj) = 0;
        virtual Object *takeFromConveyor() = 0;
        virtual void in(std::string) = 0;
        virtual void out() = 0;
    protected:
    private:
};

#endif /* !ICONVEYORBELT_HPP_ */
