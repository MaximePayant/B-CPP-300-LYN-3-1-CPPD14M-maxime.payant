/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** LittleHand.cpp
*/

#include "LittleHand.hpp"

static bool is_lime(Fruit *fruit)
{
    Lime *lime = dynamic_cast<Lime *>(fruit);

    if (!lime)
        return (false);
    return (true);
}

static bool is_lemon(Fruit *fruit)
{
    Lemon *lemon = dynamic_cast<Lemon *>(fruit);

    if (!lemon)
        return (false);
    return (true);
}

static bool is_banana(Fruit *fruit)
{
    Banana *banana = dynamic_cast<Banana *>(fruit);

    if (!banana)
        return (false);
    return (true);
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    Fruit *tmp;

    while (unsorted.head()) {
        tmp = unsorted.pickFruit();
        if (is_lime(tmp))
            limes.putFruit(tmp);
        else if (is_lemon(tmp))
            lemons.putFruit(tmp);
        else if (is_banana(tmp))
            bananas.putFruit(tmp);
    }
}