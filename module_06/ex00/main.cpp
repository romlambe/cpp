/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:42:12 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/29 15:19:25 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// int main(){
//     ScalarConverter::converter("A");
//     ScalarConverter::converter("42");
//     ScalarConverter::converter("3.14");
//     ScalarConverter::converter("nan");
//     ScalarConverter::converter("inf");
//     ScalarConverter::converter("42.0");

//     return 0;
// }

int main() {
    // Test avec un caractère non numérique
    std::cout  << "Test avec un caractère non numérique:" << std::endl;
    ScalarConverter::converter("A");
    std::cout << std::endl;

    // Test avec un entier
    std::cout  << "Test avec un entier:" << std::endl;
    ScalarConverter::converter("9");
    std::cout << std::endl;

    // Test avec un flottant
    std::cout  << "Test avec un flottant:" << std::endl;
    ScalarConverter::converter("42.42");
    std::cout << std::endl;

    // Test avec un double
    std::cout  << "Test avec un double:" << std::endl;
    ScalarConverter::converter("42.4242");
    std::cout << std::endl;

    // Test avec une valeur non numérique
    std::cout  << "Test avec une valeur non numérique:" << std::endl;
    ScalarConverter::converter("abc");
    std::cout << std::endl;

    // Test avec une valeur NaN
    std::cout  << "Test avec une valeur NaN:" << std::endl;
    ScalarConverter::converter("nan");
    std::cout << std::endl;

    // Test avec une valeur infinie
    std::cout  << "Test avec une valeur infinie:" <<  std::endl;
    ScalarConverter::converter("inf");
    std::cout << std::endl;

    return 0;
}
