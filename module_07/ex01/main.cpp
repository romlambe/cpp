/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:21:50 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/17 14:31:11 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void printOne(T &i){
	std::cout << i << " ";
}

template <typename T>
void addOne(T &i){
	i++;
}

template <typename T>
void addString(T &str){
	str += " day";
}


int main() {
	int tab[] = {0, 1, 2, 3, 4, 5};
	std::string array[] = {"one", "two", "three", "four"};

	std::cout << "Type int: ";
	::iter(tab, 6, printOne);
	std::cout << std::endl;

	::iter(tab, 6, addOne);

	std::cout << "Après addOne: ";
	::iter(tab, 6, printOne);
	std::cout << std::endl;

	std::cout << "Type: std::string ";
	::iter(array, 4, printOne);
	std::cout << std::endl;

	::iter(array, 4, addString);

	std::cout << "Après addChar: ";
	::iter(array, 4, printOne);
	std::cout << std::endl;

	return 0;
}
