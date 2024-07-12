/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:57:42 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/12 12:16:39 by romlambe         ###   ########.fr       */
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
	std::cout << "horde is dead" << std::endl;
	return 0;
}
