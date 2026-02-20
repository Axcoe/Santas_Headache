/* ------------------------------------------------------------------------------------ *
 *                                                                                      *
 * EPITECH PROJECT - Sat, Feb, 2026                                                     *
 * Title           - Santas_Headache                                                    *
 * Description     -                                                                    *
 *     TestToys                                                                         *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ *
 *                                                                                      *
 *             ███████╗██████╗ ██╗████████╗███████╗ ██████╗██╗  ██╗                     *
 *             ██╔════╝██╔══██╗██║╚══██╔══╝██╔════╝██╔════╝██║  ██║                     *
 *             █████╗  ██████╔╝██║   ██║   █████╗  ██║     ███████║                     *
 *             ██╔══╝  ██╔═══╝ ██║   ██║   ██╔══╝  ██║     ██╔══██║                     *
 *             ███████╗██║     ██║   ██║   ███████╗╚██████╗██║  ██║                     *
 *             ╚══════╝╚═╝     ╚═╝   ╚═╝   ╚══════╝ ╚═════╝╚═╝  ╚═╝                     *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ */

#include <iostream>
#include "src/object/toy/Toy.hpp"
#include "src/object/toy/Teddy.hpp"
#include "src/object/toy/LittlePony.hpp"
#include "src/object/Object.hpp"
#include "src/table/ITable.hpp"
#include "src/table/PapaXMasTable.hpp"
#include <gtest/gtest.h>

TEST(TestToys, testToy)
{
    Toy toy = Toy();
    LittlePony littlePony = LittlePony();
    Teddy teddy = Teddy();
    ITable* table = new PapaXMasTable();
    Object* toys[3];
    toys[0] = &toy;
    toys[1] = &littlePony;
    toys[2] = &teddy;

    toys[0]->isTaken();
    toys[1]->isTaken();
    toys[2]->isTaken();
    table->putOnTable(toys[0]);
    table->putOnTable(toys[1]);
    table->putOnTable(toys[2]);
    Object** objects = table->getObjects();
    std::cout << *table->takeFromTable(0) << std::endl;
    for (int i = 0; objects[i] != nullptr; i++) {
        std::cout << "Object n°" << i + 1 << ": " << (objects[i] == nullptr ? "nullptr" : objects[i]->getTaken() ? "taken" : "not taken") << std::endl;
    }
}
