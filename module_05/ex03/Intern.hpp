/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:30:41 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/26 14:35:23 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern{
public:
	Intern();
	Intern(Intern const &src);
	~Intern();
	Intern & operator=(Intern const &other);

	AForm *makeForm(std::string const &name, std::string const &target);
};


#endif
