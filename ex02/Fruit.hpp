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
        std::string _name;
        std::size_t _vitamins;

    public:
        Fruit() = delete;
        Fruit(const Fruit&) = delete;
        Fruit(Fruit&&) = delete;
        Fruit(const std::string& name, const std::size_t& vitamins);
        virtual ~Fruit() {};

        const std::string& getName() const     { return (_name);     };
        const std::size_t& getVitamins() const { return (_vitamins); };

};

#endif // FRUIT_HPP