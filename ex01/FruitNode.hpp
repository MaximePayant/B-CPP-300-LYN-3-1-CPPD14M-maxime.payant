/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** FruitNode.hpp
*/

#ifndef FRUIT_NODE_HPP
#define FRUIT_NODE_HPP

#include "Fruit.hpp"

class FruitNode
{

    public:
        Fruit *_fruit;
        FruitNode *next;
        FruitNode(Fruit *fruit) :
        _fruit(fruit),
        next(nullptr)
        {};
        ~FruitNode() {delete (_fruit);};

};

#endif // FRUIT_NODE_HPP