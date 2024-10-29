/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:27:07 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/28 16:38:22 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>

class ScalarConverter{
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &src);
	~ScalarConverter();

	ScalarConverter &operator=(ScalarConverter const &other);

	std::string _str;

	static void converter(std::string const &str);
};

#endif
