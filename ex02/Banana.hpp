/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Banana.hpp
*/

#ifndef BANANA_HPP
#define BANANA_HPP

#include "Fruit.hpp"

class Banana :
    public Fruit
{

    public:
        Banana();

        std::string getName() const override { return ("banana"); };

};

#endif // BANANA_HPP