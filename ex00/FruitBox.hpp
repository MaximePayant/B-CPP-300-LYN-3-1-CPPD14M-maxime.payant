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
        FruitBox(int size);
        ~FruitBox();

        int nbFruits() const;
        bool putFruit(Fruit *fruit);
        Fruit *pickFruit();

        FruitNode *head() const;

};

FruitBox::FruitBox(int size) :
_maxSize(size)
{}

FruitBox::~FruitBox()
{
    for (auto &fruit : _fruits)
        delete (fruit);
    _fruits.clear();
}

int FruitBox::nbFruits() const
{
    return (_fruits.size());
}

bool FruitBox::putFruit(Fruit *fruit)
{
    if (!fruit || _fruits.size() >= _maxSize)
        return (false);
    for (auto &fruitNode : _fruits)
        if (fruitNode->_fruit == fruit)
            return (false);

    FruitNode *fruitNode = new FruitNode(fruit);

    _fruits.back()->_next = fruitNode;
    _fruits.push_back(fruitNode);
    return (true);
}

Fruit* FruitBox::pickFruit()
{
    if (_fruits.empty())
        return (nullptr);

    Fruit *tmp = _fruits.front()->_fruit;

    _fruits.pop_front();
    return (tmp);
}

FruitNode* FruitBox::head() const
{
    if (_fruits.empty())
        return (nullptr);
    return (_fruits.front());
}

#endif // FRUIT_BOX_HPP