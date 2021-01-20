/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Lime.hpp
*/

#ifndef LIME_HPP
#define LIME_HPP

#include "Lemon.hpp"

class Lime :
    public Lemon
{

    public:
        Lime();

        std::string getName() const override { return ("lime"); };

};

#endif // LIME_HPP