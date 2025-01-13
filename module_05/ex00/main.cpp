/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:00 by romlambe          #+#    #+#             */
/*   Updated: 2024/12/23 17:39:54 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b1("Alice", 0);
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Erreur : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Erreur : " << e.what() << std::endl;
	}

	try {
		Bureaucrat b2("Bob", 151);
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

	return 0;
}
