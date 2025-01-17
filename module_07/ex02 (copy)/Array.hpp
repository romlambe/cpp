/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:15:58 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/17 14:53:42 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cmath>

template <typename T>
class Array{
private:
	T *_array;
	unsigned int n;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &src);
	~Array();

	Array & operator=(Array const &other);
	T &operator[](unsigned int i);
	const T &operator[](const unsigned int i) const;

	unsigned int size() const;
	T* get_array() const;
};

//Constructor
template <typename T>
Array<T>::Array(): _array(NULL), n(0){}

//Constructor with parameter
template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), n(n){}

//Copy constructor
template <typename T>
Array<T>::Array(Array const &src): _array(new T[src.n]), n(src. n){
	for (unsigned int i = 0; i < n; i++)
		_array[i] = src._array[i];
}

//Destructor
template <typename T>
Array<T>::~Array(){
	if (_array)
		delete[] _array;
}

//Assigment operator
template <typename T>
Array<T> &Array<T>::operator=(Array const &other){
	if (this != &other){
		if (_array){
			delete[] _array;
		}
		_array = new T[other.n];
		n = other.n;
		for (unsigned int i = 0; i < n; i++)
			_array[i] = other._array[i];
	}
	return *this;
}

//
template <typename T>
T &Array<T>::operator[](unsigned int i){
	if (i >= n)
		throw std::out_of_range("Index out of range");
	return _array[i];
}

//
template <typename T>
const T &Array<T>::operator[](unsigned int i)const{
	if (i >= n)
		throw std::out_of_range("Index out of range");
	return _array[i];
}

//Getter
template <typename T>
unsigned int Array<T>::size()const{
	return n;
}


#endif
