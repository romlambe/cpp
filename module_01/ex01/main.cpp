/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:57:42 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/21 09:06:18 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(){
	Zombie *horde = NULL;
	horde = horde->zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++){
		horde[i].announce();
	}
	delete [] horde;
	std::cout << "Horde is dead" << std::endl;
	return 0;
}
