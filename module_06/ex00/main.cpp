/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:42:12 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/15 14:42:11 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main() {
	// Test avec un caractère non numérique
	std::cout  << "Test avec un caractère non numérique: A" << std::endl;
	ScalarConverter::converter("A");
	std::cout << std::endl;

	// Test avec un entier
	std::cout  << "Test avec un entier: 99999999999999999999999999999999999999999999" << std::endl;
	ScalarConverter::converter("99999999999999999999999999999999999999999999");
	std::cout << std::endl;

	// Test avec un flottant
	std::cout  << "Test avec un flottant: 42.42" << std::endl;
	ScalarConverter::converter("42.42");
	std::cout << std::endl;

	// Test avec un double
	std::cout  << "Test avec un double: 42.4242" << std::endl;
	ScalarConverter::converter("42.4242");
	std::cout << std::endl;

	// Test avec une valeur non numérique
	std::cout  << "Test avec une valeur non numérique: abc" << std::endl;
	ScalarConverter::converter("abc");
	std::cout << std::endl;

	// Test avec une valeur NaN
	std::cout  << "Test avec une valeur NaN: nan" << std::endl;
	ScalarConverter::converter("nan");
	std::cout << std::endl;

	// Test avec une valeur infinie
	std::cout  << "Test avec une valeur infinie: inf" <<  std::endl;
	ScalarConverter::converter("inf");
	std::cout << std::endl;

	return 0;
}
