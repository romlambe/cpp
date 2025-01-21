/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:31 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/21 15:16:21 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	Span s(6);

	s.addNumber(1);
	s.addNumber(7);
	s.addNumber(4);
	s.addNumber(3);
	s.addNumber(8);
	s.addNumber(11);

	std::cout << "Create a Span of size 6" << std::endl;
	std::cout << "Longuest distance between 2 numbers: " << s.longestSpan() << std::endl;
	std::cout << "Shortest distance between 2 numbers: " << s.shortestSpan() << std::endl;
	std::cout << std::endl;

	try {
		Span t(1);
		std::cout << " __________________________________________"<< std::endl;
		std::cout << std::endl;
		std::cout << "Create a Span of size 1" << std::endl;
		std::cout << "Add a number to the Span" << std::endl;
		t.addNumber(3);
		std::cout << "Trying to add number to full Span" << std::endl;
		t.addNumber(2);
		try{
			std::cout << "Longest distance between 2 numbers: " << t.longestSpan() << std::endl;
			std::cout << "Shortest distance between 2 numbers: " << t.shortestSpan() << std::endl;
		}catch(std::exception &e){
			std::cerr << "Error: shortest or longest function" << std::endl;
		}
	}catch(std::exception &e){
		std::cerr << "Error: addNumbers function" << std::endl;
	}

	std::cout << std::endl;
	std::cout << " __________________________________________"<< std::endl;
	std::cout << std::endl;
	try{
		Span v(10);
		std::cout << "Create a Span of size 10" << std::endl;
		int arr[] = {15, 25, 30, 45};
		std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
		v.addNumber(numbers.begin(), numbers.end());
		try{
			std::cout << "Longest distance between 2 numbers: " << v.longestSpan() << std::endl;
			std::cout << "Shortest distance between 2 numbers: " << v.shortestSpan() << std::endl;
		}catch(std::exception &e){
			std::cerr << "Error: shortest or longest function" << std::endl;
		}
	}catch(std::exception &e){
		std::cerr << "Error: addNumber function" << std::endl;
	}
	return 0;
}
