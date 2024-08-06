/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:22:33 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/06 16:07:13 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{

protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	virtual ~WrongAnimal();
	void setType(std::string type);
	std::string getType(void) const;
	void makeSound()const;
};

#endif
