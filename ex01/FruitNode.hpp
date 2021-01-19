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
        FruitNode *_next;
        FruitNode(Fruit *fruit);
        ~FruitNode();

};

#endif // FRUIT_NODE_HPP