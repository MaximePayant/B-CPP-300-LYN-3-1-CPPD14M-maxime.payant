/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** FruitBox.hpp
*/

#ifndef FRUIT_BOX_HPP
#define FRUIT_BOX_HPP

#include <iostream>
#include <deque>

#include "FruitNode.hpp"

class FruitBox
{

    private:
        std::size_t _maxSize;
        std::deque<FruitNode *> _fruits;

    public:
        FruitBox() = delete;
        FruitBox(const FruitBox&) = delete;
        FruitBox(FruitBox&&) = delete;
        FruitBox(int size);
        ~FruitBox();

        int nbFruits() const;
        bool putFruit(Fruit *fruit);
        Fruit *pickFruit();

        FruitNode *head() const;

};

#endif // FRUIT_BOX_HPP