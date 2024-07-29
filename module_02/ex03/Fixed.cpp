/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:26:16 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/28 23:27:38 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0){
}

Fixed::~Fixed(void){
}

Fixed::Fixed(const Fixed & other){
	*this = other;
}

Fixed::Fixed(const float n){
	this->fixed = roundf(n * (1 << fractBitPart));
}

Fixed::Fixed(const int n){
	this->fixed = n << fractBitPart;
}

Fixed & Fixed::operator=(const Fixed & other){
	if (this != &other)
		this->fixed = other.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & rhs)const{
	return this->fixed > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const & rhs)const{
	return this->fixed < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const & rhs)const{
	return this->fixed >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const & rhs)const{
	return this->fixed <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const & rhs)const{
	return this->fixed == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const & rhs)const{
	return this->fixed != rhs.getRawBits();
}

Fixed Fixed::operator+(Fixed const & rhs)const{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs)const{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs)const{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs)const{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void){
	this->fixed++;
	return *this;
}

Fixed  Fixed::operator++(int){
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed & Fixed::operator--(void){
	this->fixed--;
	return *this;
}

Fixed  Fixed::operator--(int){
	Fixed tmp(*this);
	operator--();
	return tmp;
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

Fixed & Fixed::min(Fixed & a, Fixed & b){
	return a < b ? a : b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b){
	return a > b ? a : b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b){
		return a < b ? a : b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b){
		return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return os;
}
