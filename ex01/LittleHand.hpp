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
#include "FruitBox.hpp"

class LittleHand
{
    public:
        static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
};

#endif // LITTLE_HAND_HPP