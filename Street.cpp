/*
** EPITECH PROJECT, 2021
** hashcode_2021
** File description:
** Street
*/

#include "Ilian.hpp"

Street::Street(int intersection1, int intersection2, int seconds, std::string name)
{
    _intersection1 = intersection1;
    _intersection2 = intersection2;
    _seconds = seconds;
    _name = name;
}

Street::~Street()
{
}
