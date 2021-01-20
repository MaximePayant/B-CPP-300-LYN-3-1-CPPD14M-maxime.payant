/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Fruit.hpp
*/

#ifndef FRUIT_HPP
#define FRUIT_HPP

#include <iostream>

class Fruit
{

    protected:
        std::size_t _vitamins;
        std::string _name;

    public:
        Fruit() : _name("fruit"), _vitamins(0) {};
        Fruit(const std::size_t& vitamins);
        virtual ~Fruit() {};

        virtual std::string getName() const { return (_name); };
        const std::size_t& getVitamins() const { return (_vitamins); };

};

#endif // FRUIT_HPP