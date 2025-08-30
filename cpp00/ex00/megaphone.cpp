/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:20:58 by seb               #+#    #+#             */
/*   Updated: 2025/07/04 10:09:08 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void amplify(char **argv)
{
    int j = 1;
    int length;
    std::string str;

    while(argv[j])
    {
        str = argv[j];
        length = str.length();
        for(long unsigned int i = 0; i < str.length(); i++)
            str[i] = toupper(str[i]);
        std::cout << str;
        j++;
    }
    std::cout << std::endl;

}

int main(int argc, char **argv)
{
    if (argc == 1 || (argc > 1 && argv[1][0] == 0))
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        amplify(argv);
}