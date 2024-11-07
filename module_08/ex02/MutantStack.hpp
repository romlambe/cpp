/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:10:41 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/07 15:28:11 by romlambe         ###   ########.fr       */
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
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(){
		return this->c.begin();
	}

	iterator end(){
		return this->c.end();
	}
};


#endif
