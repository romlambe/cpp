/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:20:21 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 16:30:21 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(Brain const &src){
	*this = src;
	std::cout << "Brain copy constructed" << std::endl;
}

Brain & Brain::operator=(Brain const &rhs){
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructed" << std::endl;
}
