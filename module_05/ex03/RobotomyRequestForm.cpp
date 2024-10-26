/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:22:35 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/24 15:50:36 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src), _target(src._target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm  const &other){
	if (this != &other){
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat)const{
	if (getGradeToExecute() <= bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "Drilling noise ..." << std::endl;
	std::srand(std::time(0));
	if (std::rand() % 2)
		std::cout << _target << " has been successfully robotomized" << std::endl;
	else
		std::cout << _target << " the robotomy failed" << std::endl;
}
