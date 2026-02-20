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
#include <gtest/gtest.h>

TEST(TestToys, testToy)
{
    Object** toys = new Object*[3];

    Toy toy = Toy();
    LittlePony littlePony = LittlePony();
    Teddy teddy = Teddy();
    toys[0] = &toy;
    toys[1] = &littlePony;
    toys[2] = &teddy;
    EXPECT_FALSE(toys[0]->getTaken());
    toys[0]->isTaken();
    EXPECT_TRUE(toys[0]->getTaken());
    EXPECT_FALSE(toys[1]->getTaken());
    toys[1]->isTaken();
    EXPECT_TRUE(toys[1]->getTaken());
    EXPECT_FALSE(toys[2]->getTaken());
    toys[2]->isTaken();
    EXPECT_TRUE(toys[2]->getTaken());
    std::cout << "Toy n°1: " << *toys[0] << std::endl;
    std::cout << "Toy n°2: " << *toys[1] << std::endl;
    std::cout << "Toy n°3: " << *toys[2] << std::endl;
}
