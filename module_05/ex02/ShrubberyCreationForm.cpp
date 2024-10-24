/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:48:06 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/24 15:58:56 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShruberryCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm(src), _target(src._target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other){
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const{
	if (getGradeToExecute() <= bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	std::ofstream outfile(_target + "shruberry");
	if (!outfile)
		throw std::runtime_error("Couldn't open the file");

	outfile << "           # #### ####\n";
	outfile << "       ### \\/#|### |/####\n";
	outfile << "       ##\\/#/ \\||/##/_/##/_#\n";
	outfile << "     ###  \\/###|/ \\/ # ###\n";
	outfile << "   ##_\\_#\\_\\## | #/###_/_####\n";
	outfile << "  ## #### # \\ #| /  #### ##/##\n";
	outfile << "   __#_--###`  |{,###---###-~\n";
	outfile << "             \\ }{\n";
	outfile << "              }}{\n";
	outfile << "              }}{\n";
	outfile << "               {{}\n";
	outfile << "             -=-~{\n";
	outfile.close();
	std::cout << _target << "_shruberry has been successfully created" << std::endl;
}
