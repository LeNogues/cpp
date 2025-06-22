/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:10:08 by seb               #+#    #+#             */
/*   Updated: 2025/06/03 19:27:16 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Harl.hpp"

int main(void)
{
    Harl v;
    
    v.complain("INFO");
    v.complain("DEBUG");
    v.complain("WARNING");
    v.complain("ERROR");
    v.complain("TESTNULL");
    v.complain("");
}