/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Coconut.hpp
*/

#ifndef COCONUT_HPP
#define COCONUT_HPP

#include "Fruit.hpp"

class Coconut :
    public Fruit
{

    public:
        Coconut();

        std::string getName() const override { return ("coconut"); };

};

#endif // COCONUT_HPP