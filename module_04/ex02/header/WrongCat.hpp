/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:27:56 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:14:11 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:
	WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat & operator=(WrongCat const &rhs);
	virtual ~WrongCat();
	using WrongAnimal::makeSound;
	// void makeSound() const;
};

#endif
