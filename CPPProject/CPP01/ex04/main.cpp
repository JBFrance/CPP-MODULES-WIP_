//
// Created by Joshua Franceschi on 30/10/2023.
//

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream ifs(filename);
    if (!ifs.is_open())
    {
        std::cout << "Error: Could not open file" << std::endl;
        return 1;
    }
    std::string line;
    std::string output;
    while (std::getline(ifs, line))
    {
        output += line;
        output += "\n";
    }
    ifs.close();
    std::ofstream ofs(filename + ".replace");
    if (!ofs.is_open())
    {
        std::cout << "Error: Could not open file" << std::endl;
        return 1;
    }
    while (output.find(s1) != std::string::npos)
    {
        output.replace(output.find(s1), s1.length(), s2);
    }
    ofs << output;
    ofs.close();
    return 0;
}