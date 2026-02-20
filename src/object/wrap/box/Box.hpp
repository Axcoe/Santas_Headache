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
        void print(std::ostream&) const;

    protected:
    private:
};

std::ostream& operator<<(std::ostream&, const Box&);

#endif /* !BOX_HPP_ */
