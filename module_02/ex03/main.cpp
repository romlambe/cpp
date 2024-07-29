/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:25:59 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/29 10:54:13 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
	Point a(0, 0);
	Point b(5, 0);
	Point c(0, 5);
	Point p(2, 2);

	if (bsp(a, b, c, p)) {
		std::cout << "The point is inside the triangle." << std::endl;
	} else {
		std::cout << "The point is outside the triangle." << std::endl;
	}

	return 0;
}
