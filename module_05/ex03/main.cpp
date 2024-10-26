/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:00 by romlambe          #+#    #+#             */
/*   Updated: 2024/10/26 14:52:39 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        Bureaucrat JohnSmith("John Smith", 42);
        Bureaucrat HighRank("High Rank", 1);
        Bureaucrat LowRank("Low Rank", 150);
        Intern someIntern;

        // Intern creation tests
        AForm* shrubberyForm = someIntern.makeForm("shrubbery creation", "Form_24601");
        AForm* robotomyForm = someIntern.makeForm("robotomy request", "Captain Picard");
        AForm* pardonForm = someIntern.makeForm("presidential pardon", "Richard Nixon");
        AForm* unknownForm = someIntern.makeForm("Unform", "John Smith");

        // Form tests
        std::cout << "\n----- Testing ShrubberyCreationForm -----\n" << std::endl;
        if (shrubberyForm) {
            try {
                std::cout << "Attempting to sign ShrubberyCreationForm with HighRank..." << std::endl;
                shrubberyForm->beSigned(HighRank);
                std::cout << *shrubberyForm << std::endl;
                std::cout << "Attempting to execute ShrubberyCreationForm with HighRank..." << std::endl;
                shrubberyForm->execute(HighRank);
            } catch (std::exception &e) {
                std::cerr << "Exception caught: " << e.what() << std::endl;
            }
            delete shrubberyForm;
        }
        std::cout << "\n----- Testing RobotomyRequestForm -----\n" << std::endl;
        if (robotomyForm) {
            try {
                std::cout << "Attempting to sign RobotomyRequestForm with HighRank..." << std::endl;
                robotomyForm->beSigned(HighRank);
                std::cout << *robotomyForm << std::endl;
                std::cout << "Attempting to execute RobotomyRequestForm with HighRank..." << std::endl;
                robotomyForm->execute(HighRank);
            } catch (std::exception &e) {
                std::cerr << "Exception caught: " << e.what() << std::endl;
            }
            delete robotomyForm;
        }
        std::cout << "\n----- Testing PresidentialPardonForm -----\n" << std::endl;
        if (pardonForm) {
            try {
                std::cout << "Attempting to sign PresidentialPardonForm with HighRank..." << std::endl;
                pardonForm->beSigned(HighRank);
                std::cout << *pardonForm << std::endl;
                std::cout << "Attempting to execute PresidentialPardonForm with HighRank..." << std::endl;
                pardonForm->execute(HighRank);
            } catch (std::exception &e) {
                std::cerr << "Exception caught: " << e.what() << std::endl;
            }
            delete pardonForm;
        }
        std::cout << "\n----- Testing unknown form -----\n" << std::endl;
        if (unknownForm) {
            std::cerr << "Error: unknown form should not have been created." << std::endl;
            delete unknownForm;
        } else {
            std::cout << "Unknown form creation correctly handled." << std::endl;
        }
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
