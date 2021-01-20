/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Lemon.cpp
*/

#include "Lemon.hpp"


Lemon::Lemon(const std::string& name, const std::size_t& vitamins) :
Fruit(name, vitamins)
{}

Lemon::Lemon() :
Fruit("lemon", 3)
{}