/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Lemon.hpp
*/

#ifndef LEMON_HPP
#define LEMON_HPP

#include "Fruit.hpp"

class Lemon :
    virtual public Fruit
{

    public:
        Lemon();

        std::string getName() const override { return ("lemon"); };

};

#endif // LEMON_HPP