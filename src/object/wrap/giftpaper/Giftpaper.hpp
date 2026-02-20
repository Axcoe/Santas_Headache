/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Giftpaper
*/

#ifndef GIFTPAPER_HPP_
#define GIFTPAPER_HPP_

#include "../Wrap.hpp"

class Giftpaper : public Wrap {
    public:
        Giftpaper();
        ~Giftpaper();

        void wrapMeThat(Object *obj);

    protected:
    private:
};

std::ostream& operator<<(std::ostream&, const Giftpaper&);

#endif /* !GIFTPAPER_HPP_ */
