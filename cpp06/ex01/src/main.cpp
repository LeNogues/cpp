/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:52:40 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/25 14:36:48 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/Data.hpp"
#include "../header/Serializer.hpp"
#include <iostream>

int main()
{
    Data data;
    Data* after_deseralization;
    uintptr_t serialize_ptr;
    
    data.id = 10;
    data.job = "Banquier";
    data.name = "Pierre";

    std::cout << "adresse originel: " << &data << std::endl;
    std::cout << "id: " << data.id << std::endl;
    std::cout << "name: " << data.name << std::endl;
    std::cout << "job: " << data.job << std::endl;

    serialize_ptr = Serializer::serialize(&data);

    std::cout << "ptr_serialized: " << serialize_ptr << std::endl;

    after_deseralization = Serializer::deserialize(serialize_ptr);
    
    std::cout << "nouvelle adresse: " << &after_deseralization << std::endl;
    std::cout << "id: " << after_deseralization->id << std::endl;
    std::cout << "name: " << after_deseralization->name << std::endl;
    std::cout << "job: " << after_deseralization->job << std::endl;
}