/* ------------------------------------------------------------------------------------ *
 *                                                                                      *
 * EPITECH PROJECT - Sat, Feb, 2026                                                     *
 * Title           - Santas_Headache                                                    *
 * Description     -                                                                    *
 *     PapaXMasTable                                                                    *
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

#include "PapaXMasTable.hpp"

PapaXMasTable::PapaXMasTable()
{
    _objects[0] = new Teddy();
    _objects[1] = new LittlePony();
}

void PapaXMasTable::putOnTable(Object *obj)
{
    for (int i = 0; i < 10; i++) {
        if (_objects[i] == nullptr) {
            _objects[i] = obj;
            return;
        }
    }
}

Object* PapaXMasTable::takeFromTable(int i)
{
    return _objects[i];
}

Object** PapaXMasTable::getObjects()
{
    return _objects;
}
