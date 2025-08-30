/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:24:53 by seb               #+#    #+#             */
/*   Updated: 2025/07/23 21:36:14 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int error_message(std::string str)
{
    std::cout << str << std::endl;
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (error_message("ERROR: this program needs 3 arguments"));
   
    int pos;
    size_t found;
    std::string newLine;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    std::string outName = (std::string)argv[1] + ".replace";
    std::ifstream inFile(argv[1]);
    std::ofstream outFile(outName.c_str());
    
    if (!inFile)
        return (error_message("ERROR: couldn't open  inFile"));
    if (s1 == "")
        return (error_message("ERROR: s1 can't be NULL"));
    if (!outFile)
        return (error_message("ERROR: couldn't open outFile"));
    
    while(std::getline(inFile, line))
    {
        pos = 0;
        newLine = "";
        while((found = line.find(s1, pos)) != std::string::npos)
        {
            newLine += line.substr(pos, found - pos);
            newLine += s2;
            pos = found + s1.length();
        }
        newLine += line.substr(pos);
        outFile << newLine << std::endl; 
    }
}
