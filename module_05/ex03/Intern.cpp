/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:35:26 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/26 14:56:26 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &src){
	*this = src;
}

Intern::~Intern(){}

Intern & Intern::operator=(Intern const &other){
	(void)other;
	return *this;
}

AForm* createShruberry(std::string const &target){
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomy(std::string const &target){
	return new RobotomyRequestForm(target);
}

AForm* createPresidential(std::string const &target){
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string const &name, std::string const &target){
	const std::string formTypes[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
	};
	AForm* (*formsCreator[3])(std::string const&)= {
		createShruberry,
		createRobotomy,
		createPresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if(name == formTypes[i]){
			std::cout << "Intern creates " << name << std::endl;
			return formsCreator[i](target);
		}
	}
	std::cout << "Error form: " << name << " doesn't exist " << std::endl;
	return NULL;
}
