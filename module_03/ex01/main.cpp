/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:36:30 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/29 16:38:20 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(){
	ScavTrap P1("P1");

	P1.attack("ennemy");
	P1.takeDamage(50);
	P1.beRepaired(40);
	P1.guardGate();
	return 0;
	
}
