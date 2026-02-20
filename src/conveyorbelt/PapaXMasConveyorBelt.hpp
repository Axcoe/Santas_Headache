/*
** EPITECH PROJECT, 2026
** santa_rush4_2
** File description:
** PapaXMasConvoyerBelt
*/

#ifndef PAPAXMASCONVOYERBELT_HPP_
#define PAPAXMASCONVOYERBELT_HPP_

#include "IConveyorBelt.hpp"

class PapaXMasConveyorBelt : public IConveyorBelt {
    public:
        PapaXMasConveyorBelt();
        ~PapaXMasConveyorBelt() = default;

        void putOnConveyor(Object *obj) override;
        Object *takeFromConveyor() override;
        void in(std::string wrap) override;
        void out() override;

    protected:
        Object *_obj = nullptr;
        bool _isEmpty = true;

    private:
};

#endif /* !PAPAXMASCONVOYERBELT_HPP_ */
