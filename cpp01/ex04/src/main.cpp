/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:24:53 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 17:37:37 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

bool isDelimiter(char c)
{
    return std::isspace(c) || std::ispunct(c);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "this program needs 3 arguments" << std::endl;
        return (0);
    }
   
    bool valid = true;
    int pos;
    size_t found;
    std::string newLine;
    std::string fileName;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    std::string outName = (std::string)argv[1] + ".replace";
    std::ifstream inFile(argv[1]);
    if (!inFile)
    {
        std::cout << "couldn't open  inFile" << std::endl;
        return (0);
    }
    if (s1 == "")
    {
        std::cout << "s1 can't be NULL" << std::endl;
        return (0);
    }
    std::ofstream outFile(outName.c_str());
    if (!outFile)
    {
        std::cout << "couldn't open outFile" << std::endl;
        return (0);
    }
    while(std::getline(inFile, line))
    {
        pos = 0;
        newLine = "";
        while((found = line.find(s1, pos)) != std::string::npos)
        {
            if (found != 0)
            {
                char before = line[found - 1];
                if (!isDelimiter(before))
                    valid = false;
            }
            size_t after_pos = found + s1.length();
            if (after_pos < line.size())
            {
                char after = line[after_pos];
                if (!isDelimiter(after))
                    valid = false;
            } 
            if (valid)
            {
                newLine += line.substr(pos, found - pos);
                newLine += s2;
                pos = found + s1.length();
            }
            else
            {
                newLine += line.substr(pos, found - pos + 1);
                pos = found + 1;
            }
        }
        newLine += line.substr(pos);
        outFile << newLine << std::endl; 
    }
}