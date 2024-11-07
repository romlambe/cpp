/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:31 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/07 15:08:10 by romlambe         ###   ########.fr       */
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

	std::cout << "Longuest distance between 2 numbers: " << s.longestSpan() << std::endl;
	std::cout << "Shortest distance between 2 numbers: " << s.shortestSpan() << std::endl;

	try {
		Span t(1);
		t.addNumber(3);
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

	return 0;
}
