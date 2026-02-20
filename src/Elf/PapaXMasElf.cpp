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

void PapaXMasElf::put(ITable *table, Object *obj)
{
    table->putOnTable(obj);
}

Object **PapaXMasElf::look(ITable *table) const
{
    return table->getObjects();
}
