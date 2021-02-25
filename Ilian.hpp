/*
** EPITECH PROJECT, 2021
** hashcode_2021
** File description:
** Ilian
*/

#ifndef ILIAN_HPP_
#define ILIAN_HPP_

#include <iostream>
#include <vector>

class hashcode {
    public:
        hashcode();
        ~hashcode();

        int Simulation;
        int Intersection;
        int Streets;
        int ScoreOfACar;

    protected:
    private:
};

class Street {
    public:
        Street(int intersection1, int intersection2, int seconds, std::string name);
        ~Street();

        int _intersection1;
        int _intersection2;
        int _seconds;
        std::string _name;

    protected:
    private:
};

#endif /* !ILIAN_HPP_ */
