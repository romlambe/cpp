/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:17:07 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/28 12:36:39 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Default destrucor called" << std::endl;
}

Fixed::Fixed(const Fixed & other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	this->fixed = roundf(n * (1 << fractBitPart));
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->fixed = n << fractBitPart;
}

Fixed & Fixed::operator=(const Fixed & other){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->fixed = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void)const{
	return this->fixed;
}

void Fixed::setRawBits(int const raw){
	this->fixed = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->fixed / (float) (1 << fractBitPart));
}

int Fixed::toInt(void)const {
	return(this->fixed >> fractBitPart);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return os;
}
