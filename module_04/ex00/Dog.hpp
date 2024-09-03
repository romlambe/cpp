/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:04:47 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 14:49:22 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &rhs);
	virtual ~Dog();
	virtual void makeSound()const;
};

#endif
