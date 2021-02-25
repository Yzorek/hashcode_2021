#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

// void openFile(char **av)
// {
//     int j = 0;
//     char test;

//     while (av[++j] != NULL) {
//         std::ifstream my_file(av[j], std::ios::in);
//         if (!my_file) {
//         std::cerr << "my_traffic: " << av[j] <<": No such file or directory"<< std::endl;
//     } else
//     while (my_file.get(test))
//         std::cout << test;
//     }
// }

std::string openFile(const std::string &path) {
    std::ifstream input_file(path);
    if (!input_file.is_open()) {
        std::cerr << "Could not open the file - '"
             << path << "'" << std::endl;
        exit(EXIT_FAILURE);
    }
    return std::string((std::istreambuf_iterator<char>(input_file)), std::istreambuf_iterator<char>());
}

int main(int ac, char **av)
{
    std::string filename(av[1]);
    std::string file_contents;

    if (ac == 1) {
        std::cerr << "my_traffic: Usage: ./my_cat file [...]" << std::endl;
        return (84);
    }
    if (ac >= 2) {
        file_contents = openFile(filename);
        std::cout << file_contents << std::endl;
        exit(EXIT_SUCCESS);
    }
    return (0);
}