/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "../../Object.hpp"

class Wrap : public Object {
    public:
        Wrap();
        ~Wrap();

        void openMe();

    protected:
        bool _isOpen = true;
        bool _isEmpty = true;
        Object *_obj = nullptr;

    private:
};

#endif /* !WRAP_HPP_ */
