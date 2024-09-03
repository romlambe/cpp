/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:04:41 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 14:49:28 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

public:
	Cat();
	Cat(Cat const &src);
	Cat & operator=(Cat const &rhs);
	virtual ~Cat();
	virtual void makeSound()const;
};

#endif
