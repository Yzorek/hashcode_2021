#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Ilian.hpp"
#include "Parser.hpp"

std::vector<Street> AllStreets;

void openFile(char **av)
{
    int j = 0;
    char test;

    while (av[++j] != NULL) {
        std::ifstream my_file(av[j], std::ios::in);
        if (!my_file) {
        std::cerr << "my_traffic: " << av[j] <<": No such file or directory"<< std::endl;
    } else
    while (my_file.get(test))
        std::cout << test;
    }
}

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cerr << "my_traffic: Usage: ./my_cat file [...]" << std::endl;
        return 84;
    }
    if (ac >= 2)
        openFile(av);
    AllStreets = Parser::parseFile();
    return 0;
}