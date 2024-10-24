/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:11 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/24 15:50:16 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_HPP
#define SHRUBERRY_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class ShrubberyCreationForm: public AForm{
private:
	std::string _target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(ShrubberyCreationForm  const &other);

	void execute(Bureaucrat const &bureaucrat) const;

};

#endif
