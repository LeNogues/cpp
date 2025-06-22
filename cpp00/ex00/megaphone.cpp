/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:20:58 by seb               #+#    #+#             */
/*   Updated: 2025/05/28 12:43:24 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

void megaphone::amplify(std::string str)
{
    for(long unsigned int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
    std::cout << str << std::endl;
}

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 2)
    {
        std::cout << "need 1 arguments" << std::endl;
        return (0);
    }
        
    megaphone ampli;
    ampli.amplify(argv[1]);
}