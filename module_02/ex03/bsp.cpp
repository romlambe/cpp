/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:26:59 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/29 10:54:43 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float crossProduct(Point const a, Point const b){
	return a.getX().toFloat() * b.getY().toFloat() - a.getY().toFloat() * b.getX().toFloat();
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Point ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
	Point ap(point.getX().toFloat() - a.getX().toFloat(), point.getY().toFloat() - a.getY().toFloat());
	Point bc(c.getX().toFloat() - b.getX().toFloat(), c.getY().toFloat() - b.getY().toFloat());
	Point bp(point.getX().toFloat() - b.getX().toFloat(), point.getY().toFloat() - b.getY().toFloat());
	Point ca(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());
	Point cp(c.getX().toFloat() - point.getX().toFloat(), c.getY().toFloat() - point.getY().toFloat());

	float cross1 = crossProduct(ab, ap);
	float cross2 = crossProduct(bc, bp);
	float cross3 = crossProduct(ca, cp);
	std::cout << cross1 << std::endl;
	std::cout << cross2 << std::endl;
	std::cout << cross3 << std::endl;
	bool has_neg = (cross1 < 0) || (cross2 < 0) || (cross3 < 0);
	bool has_pos = (cross1 > 0)  ||(cross2 > 0) || (cross3 > 0);

	return !(has_neg && has_pos);
}


