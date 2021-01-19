/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Mixer.hpp
*/

#ifndef MIXER_HPP
#define MIXER_HPP

#include "MixerBase.hpp"

class Mixer :
    public MixerBase
{

    public:
        Mixer();

        void plug();
        static int mixeur(FruitBox &fruits);

};

#endif // MIXER_HPP