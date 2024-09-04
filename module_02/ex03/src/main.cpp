/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:25:59 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:21:47 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/Point.hpp"
#include "../header/Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
	Point a(0, 0);
	Point b(5, 0);
	Point c(0, 5);
	Point p(2, 2);
	Point p2(10, 25);

	std::cout << "Point A: " << a << std::endl;
	std::cout << "Point B: " << b << std::endl;
	std::cout << "Point C: " << c << std::endl;
	std::cout << "Point P1: " << p << std::endl;
	std::cout << "Point P2: " << p2 << std::endl;
	std::cout << std::endl;
	if (bsp(a, b, c, p)) {
		std::cout << "The point is inside the triangle." << std::endl;
	} else {
		std::cout << "The point is outside the triangle." << std::endl;
	}

	if (bsp(a, b, c, p2)) {
		std::cout << "The point P1 is inside the triangle." << std::endl;
	} else {
		std::cout << "The point P2 is outside the triangle." << std::endl;
	}

	return 0;
}
