/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:26:50 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/29 10:43:18 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(){

}

Point::Point(float const a, float const b): x(a), y(b){

}

Point::Point(Point const &p): x(p.getX()), y(p.getY()){

}

Point& Point::operator=(Point &other){
	return (other);
}

Point::~Point(){

}

Fixed Point::getX()const{
	return this->x;
}

Fixed Point::getY()const{
	return this->y;
}
