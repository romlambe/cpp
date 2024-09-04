/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:01:14 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/17 14:07:32 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	Harl harl;
	
	if (ac != 2){
		std::cout << "Unvalid arguments: <program> <level>" << std::endl;
		return 1;
	}
	harl.complain(av[1]);
	return 0;
}
