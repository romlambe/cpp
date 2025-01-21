/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:32 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/21 15:06:40 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span{
private:
	unsigned int _n;
	std::vector<int> _v;
public:
	Span();
	Span(unsigned int _n);
	~Span();
	Span(Span const &src);
	Span & operator=(Span const &other);

	void addNumber(unsigned int number);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
};

#endif
