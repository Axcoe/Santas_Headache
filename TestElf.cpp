#include <iostream>
#include "src/object/toy/Toy.hpp"
#include "src/object/toy/Teddy.hpp"
#include "src/object/toy/LittlePony.hpp"
#include "src/object/Object.hpp"
#include "src/object/wrap/Wrap.hpp"
#include "src/object/wrap/box/Box.hpp"
#include "src/object/wrap/giftpaper/Giftpaper.hpp"
#include "src/table/ITable.hpp"
#include "src/table/PapaXMasTable.hpp"
#include "src/Elf/IElf.hpp"
#include "src/Elf/PapaXMasElf.hpp"
#include "src/conveyorbelt/IConveyorBelt.hpp"
#include "src/conveyorbelt/PapaXMasConveyorBelt.hpp"
#include <gtest/gtest.h>

TEST(TestElves, testElf)
{
    Object *toy = new Toy();
    Object *littlePony = new LittlePony();
    Object *teddy = new Teddy();
    ITable* table = new PapaXMasTable();
    IConveyorBelt *cBelt = new PapaXMasConveyorBelt();
    IElf *elf = new PapaXMasElf();
    Object *box = new Box();
    
    table->putOnTable(littlePony);
    table->putOnTable(teddy);
    elf->wrap(box, teddy);
    elf->out(box, cBelt);
}
