/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** LittleHand.hpp
*/

#ifndef LITTLE_HAND_HPP
#define LITTLE_HAND_HPP

#include "Lemon.hpp"
#include "Banana.hpp"
#include "Lime.hpp"
#include "Coconut.hpp"
#include "FruitBox.hpp"
#include "Mixer.hpp"

class LittleHand
{
    public:
        static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
        static FruitBox * const *organizeCoconut(Coconut const * const *coconuts);
        static void plugMixer(MixerBase &mixer);
        static void injectVitamin(Fruit &f, int quantity);

};

struct InTheMatrixFruit
{
    virtual ~InTheMatrixFruit();
    int vitamins;
};

#endif // LITTLE_HAND_HPP