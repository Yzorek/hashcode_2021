/*
** EPITECH PROJECT, 2021
** hashcode_2021
** File description:
** Parser
*/

#include "Parser.hpp"

Parser::Parser()
{
}

std::vector<Street> Parser::parseFile(std::string lines)
{
    std::vector<Street> Tab;
    int space_count = 0;
    std::string int1;
    std::string int2;
    std::string name;
    std::string seconds;

    for (int i = 0; i < lines.size(); i++) {
        if (i < 1) continue;

        if (lines.at(i) == ' ')
            space_count++;

        if (space_count == 0)
            int1.push_back(lines.at(i));
        if (space_count == 1)
            int2.push_back(lines.at(i));
        if (space_count == 2)
            name.push_back(lines.at(i));
        if (space_count == 3)
            seconds.push_back(lines.at(i));

        if (lines.at(i) == '\n') {
            std::cout << int1 << std::endl;
            if (atoi(int2.c_str()) == 0) break;
            Tab.push_back(Street(atoi(int1.c_str()), atoi(int2.c_str()), atoi(seconds.c_str()), name));
            space_count = 0;
            int1.clear();
            int2.clear();
            name.clear();
            seconds.clear();
        }

        // before_space = lines.substr(0, lines.find(" "));
        // after_space = lines.substr(lines.find(" ") + 1);
        // Tab.push_back(Street(before_space, after_space, ))
    }

    return (Tab);
}

Parser::~Parser()
{
}
