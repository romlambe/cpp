/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:10:48 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/24 15:56:15 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm{
private:
	std::string const _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	AForm(std::string _name, int _gradeToSign, int _gradeToExecute);
	AForm(AForm const& src);
	virtual ~AForm();
	AForm & operator=(AForm const &other);

	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char * what() const throw();
	};

	void beSigned(Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif
