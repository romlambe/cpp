/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:17:13 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/28 12:28:12 by romlambe         ###   ########.fr       */
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
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void)const;
	int toInt(void)const;

	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif
