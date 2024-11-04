/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:35:40 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/04 14:12:39 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){};

Base * generate(){
	srand(time(NULL)) ;
	switch(int random = rand() % 3){
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

void identify(Base *p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base & p){
	try {
		A& a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "A" << std::endl;
		return;
	}catch(const std::bad_cast &){};

	try {
		B& b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "B" << std::endl;
		return;
	}catch(const std::bad_cast &){};

	try {
		C& c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "C" << std::endl;
		return;
	}catch(const std::bad_cast &){};

	std::cout << "Unknow type" << std::endl;
}