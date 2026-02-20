/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** TestWrap
*/

#include "src/object/wrap/Wrap.hpp"
#include "src/object/wrap/box/Box.hpp"
#include "src/object/wrap/giftpaper/Giftpaper.hpp"
#include "src/object/toy/Toy.hpp"
#include "src/object/toy/Teddy.hpp"
#include "src/object/Object.hpp"
#include <gtest/gtest.h>

Object *MyUnitTests(Object **listObj)
{
    listObj[1]->wrapMeThat(listObj[0]);
    listObj[2]->wrapMeThat(listObj[1]);

    std::cout << *listObj[1] << std::endl;

    return listObj[2];
}

TEST(TestWrap, testWrap)
{
    Object **list = new Object*[3];

    Teddy teddy = Teddy();
    list[0] = &teddy;

    Box box = Box();
    list[1] = &box;

    Giftpaper giftpaper = Giftpaper();
    list[2] = &giftpaper;

    Object *obj = MyUnitTests(list);
    std::cout << *obj << std::endl;
}
