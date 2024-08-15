/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:05:16 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/07 16:21:55 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	Animal & operator=()
	virtual ~Animal();
	void setType(std::string type);
	std::string getType(void) const;
	virtual void makeSound()const = 0;
};

#endif
