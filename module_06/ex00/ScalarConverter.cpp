/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:27:08 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/15 14:56:53 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const &src){
	if (this != &src)
		this->_str =  src._str;
}

ScalarConverter::~ScalarConverter(){}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const &other){
	if (this != &other)
		this->_str =  other._str;
	return *this;
}


int convertToInt(const std::string &str){
	std::stringstream ss (str);
	int result;
	ss >> result;
	if (ss.fail() || !ss.eof())
		throw std::invalid_argument("Invalid argument for int convert");
	return result;
}

float convertToFloat(std::string const &str){
	std::stringstream ss (str);
	float result;
	ss >> result;
	if (ss.fail() || !ss.eof())
		throw std::invalid_argument("Invalid argument for float convert");
	return result;
}

double convertToDouble(std::string const &str){
	std::stringstream ss (str);
	double result;
	ss >> result;
	if (ss.fail() || !ss.eof())
		throw std::invalid_argument("Invalid argument for double convert");
	return result;
}

void ScalarConverter::converter(const std::string &str) {
	bool conversionSuccess = false;
	std::string errorMessages;

	if (str.length() == 1 && !isdigit(str[0])) {
		char c = str[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}
	else
		errorMessages += "Invalid argument for char conversion\n";

	try {
		int i = convertToInt(str);
		if (i < 32 || i > 126)
			std::cout << "char: " << "ASCII value is not printable" << std::endl;
		else
			std::cout << "char: " << "'" << static_cast<char>(i) << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
		conversionSuccess = true;
	} catch (const std::invalid_argument& e) {
		errorMessages += std::string(e.what()) + "\n";
	}

	if (!conversionSuccess) {
		try {
			float f = convertToFloat(str);
			if (f < 32 || f > 126 || std::isnan(f))
				std::cout << "char: " << "ASCII value is not printable" << std::endl;
			else
				std::cout << "char: " << "'" << static_cast<char>(f) << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(f) << std::endl;
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(f) << std::endl;
			conversionSuccess = true;
		} catch (const std::invalid_argument& e) {
			errorMessages += std::string(e.what()) + "\n";
		}
	}

	if (!conversionSuccess) {
		try {
			double d = convertToDouble(str);
			if (d < 32 || d > 126 || std::isnan(d))
				std::cout << "char: " << "ASCII value is not printable" << std::endl;
			else
				std::cout << "char: " << "'" << static_cast<char>(d) << "'" << std::endl;
			std::cout << "int: ";
			if (d < INT_MIN || d > INT_MAX || std::isnan(d) || std::isinf(d))
				std::cout << "Out of bound" << std::endl;
			else
				std::cout << static_cast<int>(d) << std::endl;
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			conversionSuccess = true;
		} catch (const std::invalid_argument& e) {
			errorMessages += std::string(e.what()) + "\n";
		}
	}

	if (!conversionSuccess) {
		std::cerr << errorMessages << std::endl;
	}
}
