/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:57:04 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/12 14:59:41 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac == 2){
		BitcoinExchange btc;
		btc.compare(av[1]);
	}
	else{
		std::cout << "Usage: ./btc \"filename\" " << std::endl;
	}
	return 0;
}
