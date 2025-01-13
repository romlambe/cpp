/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:00 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/13 09:33:58 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		// Instanciation d'un Bureaucrat avec un grade incorrect
		Bureaucrat b1("Alice", 0);  // Cela va lancer GradeTooHighException
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Erreur : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Erreur : " << e.what() << std::endl;
	}

	try {
		// Instanciation avec un autre grade incorrect
		Bureaucrat b2("Bob", 151);  // Cela va lancer GradeTooLowException
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Erreur : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Erreur : " << e.what() << std::endl;
	}

	Bureaucrat Jean("Jean", 15);
	std::cout << Jean << std::endl;
	Jean.decrementGrade();
	std::cout << "Jean after decrement: " << Jean << std::endl;
	Jean.incrementGrade();
	std::cout << "Jean after increment: " << Jean << std::endl;


	std::cout << "\t----- Form tests -----\n" << std::endl;
	try {
		Form TooHigh("Form1", 0, 42);
	} catch (const Form::GradeTooHighException& e) {
		std::cerr  << "Exception caught: " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException& e) {
		std::cerr  << "Exception caught: " << e.what() << std::endl;
	}
	try {
		Form TooLow("Form1", 160, 160);
	} catch (const Form::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	Form Form1("A38", 38, 38);
	std::cout  << Form1 << std::endl;
	Bureaucrat JohnDoe("John Doe", 35);
	std::cout << JohnDoe << std::endl;
	Form1.beSigned(JohnDoe);
	std::cout << Form1 << std::endl;
	return 0;
}
