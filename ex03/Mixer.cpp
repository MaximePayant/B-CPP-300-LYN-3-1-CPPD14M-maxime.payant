/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Mixer.cpp
*/

#include "Mixer.hpp"

Mixer::Mixer()
{
    _mixfunc = &mixeur;
}

void Mixer::plug()
{
    _plugged = true;
}

int Mixer::mixeur(FruitBox &fruits)
{
    size_t vitamins = 0;

    for (FruitNode *tmp = fruits.head(); tmp; tmp = tmp->next)
        vitamins += tmp->_fruit->getVitamins();
    return (vitamins);
}