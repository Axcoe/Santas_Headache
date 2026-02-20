/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** TestConveyorBelt
*/

#include <iostream>
#include "src/object/toy/Toy.hpp"
#include "src/object/toy/Teddy.hpp"
#include "src/object/Object.hpp"
#include "src/conveyorbelt/PapaXMasConveyorBelt.hpp"
#include "src/conveyorbelt/IConveyorBelt.hpp"
#include <gtest/gtest.h>

TEST(TestConveyorBelt, testConveyorBelt)
{
    IConveyorBelt *conv = new PapaXMasConveyorBelt();
    Object *teddy = new Teddy;

    conv->in("box");
    Object *objFromConv = conv->takeFromConveyor();

    std::cout << *objFromConv << std::endl;

    conv->out();

    conv->putOnConveyor(teddy);

    conv->out();
}
