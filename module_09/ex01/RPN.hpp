/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:12:43 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/15 15:00:27 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>
// #include <stdexcept>

class RPN{
private:
	std::stack<int> _data;
public:
	RPN();
	RPN(const RPN &src);
	~RPN();
	RPN & operator=(const RPN &other);

	int sumCalculate(std::string stack);
};
