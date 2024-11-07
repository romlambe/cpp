/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:32 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/06 15:22:46 by romlambe         ###   ########.fr       */
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
	int shortestSpan();
	int longestSpan();
};

#endif
