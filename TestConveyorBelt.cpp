/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** TestConveyorBelt
*/

#include <iostream>
#include "src/object/toy/Toy.hpp"
#include "src/object/toy/Teddy.hpp"
#include "src/object/toy/LittlePony.hpp"
#include "src/object/Object.hpp"
#include "src/table/ITable.hpp"
#include "src/table/PapaXMasTable.hpp"
#include "src/conveyorbelt/PapaXMasConveyorBelt.hpp"
#include "src/conveyorbelt/IConveyorBelt.hpp"
#include <gtest/gtest.h>

TEST(TestConveyorBelt, testConveyorBelt)
{
    IConveyorBelt *conv = new PapaXMasConveyorBelt();
    Teddy teddy = Teddy();

    conv->in();
    Object *objFromConv = conv->takeFromConveyor();
}
