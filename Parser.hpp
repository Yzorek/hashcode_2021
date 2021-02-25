/*
** EPITECH PROJECT, 2021
** hashcode_2021
** File description:
** Parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <iostream>
#include <vector>
#include "Ilian.hpp"

class Parser {
    public:
        Parser();
        static std::vector<Street> parseFile(std::string lines);
        ~Parser();

    protected:
    private:
};

#endif /* !PARSER_HPP_ */
