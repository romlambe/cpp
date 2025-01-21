/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:35 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/21 15:06:37 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){};

Span::Span(unsigned int _n): _n(_n){};

Span::~Span(){};

Span::Span(Span const &src){
	if (this != &src)
		_n = src._n;
}

Span & Span::operator=(Span const &other){
	if (this != &other)
		_n = other._n;
	return *this;
}

void Span::addNumber(unsigned int number){
	if (_v.size() >= _n)
		throw std::exception();
	_v.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if (std::distance(begin, end) + _v.size() > _n)
		throw std::out_of_range("Adding range exceeds Span capacity");
	_v.insert(_v.end(), begin, end);
}

int Span::shortestSpan(){
	if (_v.size() < 2)
		throw std::exception();
	std::vector<int> sortedNumbers = _v;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int min = _v[1] - _v[0];
	for (unsigned int i = 1 ; i < sortedNumbers.size(); i++){
		int distance = sortedNumbers[i] - sortedNumbers[i - 1];
			if (distance < min){
				min = distance;
			}
	}
	return min;
}

int Span::longestSpan(){
	if (_v.size() < 2)
		throw std::exception();
	std::vector<int> sortedNumbers = _v;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int max = sortedNumbers[sortedNumbers.size() - 1] - sortedNumbers[0];
	return max;
}


