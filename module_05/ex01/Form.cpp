/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:17:50 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/23 17:07:27 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {}

Form & Form::operator=(Form const &other){
	if (this != &other)
		_signed = other._signed;
	return *this;
}

Form::~Form(){}

std::string Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return  _signed;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade trop élevé !");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade trop bas !");
}

void Form::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else if (_signed){
		std::cout << "The form is already signed" << std::endl;
		return;
	}
	else{
		std::cout << bureaucrat.getName() << " signs " << _name << " forms" << std::endl;
		_signed = true;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
	os << obj.getName() << " form is ";
	if (obj.getSigned()){
		os << " signed ";
	} else {
		os << " not signed ";
	}
	os << "and required a grade " << obj.getGradeToSign() << " to be signed and a grade " << obj.getGradeToExecute() << " to be executed";
	return os;
}
