/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <iomanip>

class Object {
    public:
        Object();
        ~Object();
        virtual void isTaken();
        virtual bool getTaken() const;

        // void openMe();
        // bool getOpen() const;
        // bool getEmpty() const;
        virtual void wrapMeThat(Object *obj);
        virtual void print(std::ostream&) const;

    protected:
    private:
};

std::ostream& operator<<(std::ostream& stream, const Object& obj);

#endif /* !OBJECT_HPP_ */
