/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:35:57 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/15 14:14:17 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data;

    data.age = 23;
    data.name = "Romain";

    std::cout << "\n----- Data -----" << std::endl;
    std::cout << data.age << std::endl;
    std::cout << data.name << std::endl;

    std::cout << "\n----- Conversion -----" << std::endl;
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialize data : " << raw << std::endl;
    
    Data* ptr = Serializer::deserialize(raw);
    std::cout << "\n----- Ptr -----" << std::endl;
    std::cout << ptr->age << std::endl;
    std::cout << ptr->name << std::endl;

    return 0;
}