/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "../Object.hpp"

class Wrap : public Object {
    public:
        Wrap();
        ~Wrap();

        void openMe();

        bool getOpen() const;
        bool getEmpty() const;
        Object *getObj() const;

    protected:
        bool _isOpen = true;
        bool _isEmpty = true;
        Object *_obj = nullptr;

    private:
};

std::ostream& operator<<(std::ostream&, const Wrap&);

#endif /* !WRAP_HPP_ */
