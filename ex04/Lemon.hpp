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
    public Fruit
{

    protected:
        Lemon(const std::string& name, const std::size_t& vitamins);

    public:
        Lemon();

};

#endif // LEMON_HPP