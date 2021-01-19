/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** MixerBase.hpp
*/

#ifndef MIXER_BASE_HPP
#define MIXER_BASE_HPP

#include "FruitBox.hpp"

class  MixerBase
{
    public:
        MixerBase();
        int mix(FruitBox &fruits) const;

    protected:
        bool _plugged;
        int (*_mixfunc)(FruitBox &fruits);
};

#endif // MIXER_BASE_HPP