/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:12:37 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/15 15:02:17 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Error: Usage ./RPN (expression)" << std::endl;
		return 1;
	}
	RPN calculate;

	try{
		int result = calculate.sumCalculate(av[1]);
		std::cout << "Resultat: " << result << std::endl;
	}catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
