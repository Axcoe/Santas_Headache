/* ------------------------------------------------------------------------------------ *
 *                                                                                      *
 * EPITECH PROJECT - Sat, Feb, 2026                                                     *
 * Title           - Santas_Headache                                                    *
 * Description     -                                                                    *
 *     PapaXMasElf                                                                      *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ *
 *                                                                                      *
 *       _|_|_|_|  _|_|_|    _|_|_|  _|_|_|_|_|  _|_|_|_|    _|_|_|  _|    _|           *
 *       _|        _|    _|    _|        _|      _|        _|        _|    _|           *
 *       _|_|_|    _|_|_|      _|        _|      _|_|_|    _|        _|_|_|_|           *
 *       _|        _|          _|        _|      _|        _|        _|    _|           *
 *       _|_|_|_|  _|        _|_|_|      _|      _|_|_|_|    _|_|_|  _|    _|           *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ */

#include "PapaXMasElf.hpp"

PapaXMasElf::PapaXMasElf()
{
}

void PapaXMasElf::take(ITable *table, int i)
{
    Object *obj = table->takeFromTable(i);
    if (obj != nullptr) {
        obj->isTaken();
    }
}

void PapaXMasElf::take(IConveyorBelt *cBelt, int i)
{
    cBelt->takeFromConveyor();
}

void PapaXMasElf::put(ITable *table, Object *obj)
{
    table->putOnTable(obj);
}

void PapaXMasElf::put(IConveyorBelt *cBelt, Object *obj)
{
    cBelt->putOnConveyor(obj);
}

Object **PapaXMasElf::look(ITable *table) const
{
    return table->getObjects();
}

void PapaXMasElf::out(Object *obj, IConveyorBelt *cBelt)
{
    cBelt->putOnConveyor(obj);
    cBelt->out();
}
