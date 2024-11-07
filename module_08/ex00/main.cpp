/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:47:22 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/06 14:54:15 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(6);

	int value = 4;
	std::cout << "Trying with " << value << std::endl;
	try {
		std::cout << *easyfind(numbers, value) << std::endl;
	}catch(std::exception &e){
		std::cout << value << " not foud" << std::endl;
	}

	value = 7;
	std::cout << "Trying with " << value << std::endl;
	try{
		std::cout << *easyfind(numbers, value) << std::endl;
	} catch(std::exception &e){
		std::cout << value << " not found" <<std::endl;
	}
	return 0;
}
