/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:48:16 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/04 13:54:46 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>


class Base{
public:
	virtual ~Base();
};

class A: public Base{
};

class B: public Base{
};

class C: public Base{
};

Base * generate(void);
void identify(Base *p);
void identify(Base& p);

#endif
