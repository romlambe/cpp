/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:03:20 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/15 15:28:47 by romlambe         ###   ########.fr       */
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
	Fixed(const Fixed& entier);
	Fixed& operator=(const Fixed & other);
	~Fixed(void);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
