/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** FruitNode.cpp
*/

#include "FruitNode.hpp"

FruitNode::FruitNode(Fruit *fruit) :
_fruit(fruit),
_next(nullptr)
{}

FruitNode::~FruitNode()
{
    delete (_fruit);
}