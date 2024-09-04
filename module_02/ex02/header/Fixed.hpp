/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:39:16 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/15 15:53:54 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{

private:
	int fixed;
	const static int fractBitPart = 8;

public:
	Fixed(void);
	Fixed(const float n);
	Fixed(const int n);
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed & other);
	~Fixed(void);

	bool operator>(Fixed const & rhs)const;
	bool operator<(Fixed const & rhs)const;
	bool operator>=(Fixed const & rhs)const;
	bool operator<=(Fixed const & rhs)const;
	bool operator==(Fixed const & rhs)const;
	bool operator!=(Fixed const & rhs)const;

	Fixed operator+(Fixed const & rhs)const;
	Fixed operator-(Fixed const & rhs)const;
	Fixed operator*(Fixed const & rhs)const;
	Fixed operator/(Fixed const & rhs)const;

	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void)const;
	int toInt(void)const;

	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);

};
	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif
