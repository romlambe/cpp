/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:03:28 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/02 15:30:03 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed & Fixed::operator=(const Fixed & other){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->fixed = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void)const{
	std::cout << "getRawBit member called" << std::endl;
	return this->fixed;
}

void Fixed::setRawBits(int const raw){
	this->fixed = raw;
}
