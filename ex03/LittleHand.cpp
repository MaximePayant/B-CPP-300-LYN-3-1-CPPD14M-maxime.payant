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

static std::size_t getFruitBoxNumber(Coconut const * const *coconuts)
{
    size_t len = 0;
    size_t nb = 0;

    while (coconuts[len] != nullptr)
        len += 1;
    nb = len / 6;
    nb += (len % 6 > 0 ? 1 : 0);
    return (nb);
}

FruitBox * const *LittleHand::organizeCoconut(Coconut const * const *coconuts)
{
    size_t nb = getFruitBoxNumber(coconuts);
    FruitBox **fruitBoxes = new FruitBox*[nb + 1]();
    size_t coconutCtr = 0;

    for (size_t ctr = 0; ctr < nb; ctr += 1) {
        fruitBoxes[ctr] = new FruitBox(6);
        for (size_t fruitCtr = 0; coconuts[coconutCtr] && fruitCtr < 6; fruitCtr += 1) {
            fruitBoxes[ctr]->putFruit((Fruit*)coconuts[coconutCtr]);
            coconutCtr += 1;
        }
    }
    fruitBoxes[nb] = nullptr;
    return (fruitBoxes);
}

void LittleHand::plugMixer(MixerBase &mixer)
{
    reinterpret_cast<Mixer*>(&mixer)->plug();
}