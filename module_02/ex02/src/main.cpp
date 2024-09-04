/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:01:37 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:20:48 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
Fixed e (0);
a = Fixed( 1234.4321f );

std::cout << "---COMPARISON OPERATOR---" << std::endl;
std::cout << "a < b: " << Fixed(a < b) << std::endl;
std::cout << "a > b: " << Fixed(a > b) << std::endl;
std::cout << "a <= b: " << Fixed(a <= b) << std::endl;
std::cout << "a >= b: " << Fixed(a >= b) << std::endl;
std::cout << "a == b: " << Fixed(a == b) << std::endl;
std::cout << "a != b: " << Fixed(a != b) << std::endl;
std::cout << std::endl;

std::cout << "---ARITHMETIC OPERATOR---" << std::endl;
std::cout << "a + b: " << Fixed(a + b) << std::endl;
std::cout << "b - c: " << Fixed(b - c) << std::endl;
std::cout << "c * d: " << Fixed(c * d) << std::endl;
std::cout << "a / b: " << Fixed(a / b) << std::endl;
std::cout << std::endl;

std::cout << "---INCREMENT  OPERATOR---" << std::endl;
std::cout << e << std::endl;
std::cout << ++e << std::endl;
std::cout << e << std::endl;
std::cout << e++ << std::endl;
std::cout << e << std::endl;
std::cout << std::endl;

std::cout << "---MIN & MAX  OPERATOR---" << std::endl;
std::cout << "Max between a & b:" << Fixed::max(a, b) << std::endl;
std::cout << "Min between a & b:" << Fixed::min(a, b) << std::endl;
std::cout << std::endl;

return 0;
}

//verifier pourquoi a++ n'incremente pas apres qu'il soit fait
