/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:12:40 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/15 15:08:51 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){};

RPN::RPN(const RPN &src){
	*this = src;
};

RPN::~RPN(){};

RPN & RPN::operator=(const RPN &other){
	if (this != &other){
		this->_data = other._data;
	}
	return *this;
}

int RPN::sumCalculate(std::string stack){
	std::istringstream iss (stack);
	std::stack<int> data;
	std::string strData;
	int intData;

	while (iss >> strData){
		if (isdigit(strData[0])){
			_data.push(std::stoi(strData));
			std::stringstream ss(strData);
			ss >> intData;
			if (intData >= 10){
				throw std::runtime_error("Error: numbers must be less than 10");
			}
		}
		else {
			if (_data.size() < 2){
				throw std::runtime_error("Error: insufficient values in expression");
			}
			int b = _data.top(); _data.pop();
			int a = _data.top(); _data.pop();
			if (strData == "+"){
				_data.push(a + b);
			}
			else if (strData == "-"){
				_data.push(a - b);

			}
			else if (strData == "*"){
				_data.push(a * b);
			}
			else if (strData == "/"){
				if (b == 0){
					throw std::runtime_error("Error: can't divide by 0");
				}
				_data.push(a / b);
			}
			else{
				throw std::runtime_error("Error: Unknow operator");
			}
		}
	}
	if (_data.size() != 1){
		throw std::runtime_error("Error: Malformed expression");
	}
	return (_data.top());
}
