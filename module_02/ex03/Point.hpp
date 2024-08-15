/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:26:31 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/15 15:55:41 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point{

private:
	Fixed const x;
	Fixed const y;
public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const &p);
	Point& operator=(Point& other);
	~Point(void);
	Fixed getX(void)const;
	Fixed getY(void)const;

};
	std::ostream& operator<<(std::ostream& os, const Point& point);

#endif
