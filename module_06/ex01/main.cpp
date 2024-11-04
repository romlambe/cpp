/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:35:57 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/29 15:44:08 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data data;
	data.name = "Romain";
	data.age = 23;

	uintptr_t serialized = Serializer::serialize(&data);
	Data* deserializer = Serializer::deserialize(serialized);

	std::cout << "Data name = " << deserializer->name << std::endl;
	std::cout << "Data age = " << deserializer->age << std::endl;

	return 0;
}
