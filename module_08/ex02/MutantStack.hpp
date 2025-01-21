/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:10:41 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/21 16:04:42 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
#define MUTANT_HPP


#include <deque>
#include <stack>
#include <iterator>
#include <iostream>
#include <list>

template<typename T>
class MutantStack: public std::stack<T>{
public:

	MutantStack() : std::stack<T>(){}
	MutantStack(const MutantStack &other): std::stack<T>(other){}
	~MutantStack(){};
	MutantStack &operator=(const MutantStack &other){
		if (this != &other){
			std::stack<T>::operator=(other);
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(){
		return this->c.begin();
	}

	iterator end(){
		return this->c.end();
	}
};


#endif
