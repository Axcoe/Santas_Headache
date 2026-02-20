/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include "../Wrap.hpp"

class Box : public Wrap {
    public:
        Box();
        ~Box();

        void wrapMeThat(Object *obj);
        void closeMe();

    protected:
    private:
};

#endif /* !BOX_HPP_ */
