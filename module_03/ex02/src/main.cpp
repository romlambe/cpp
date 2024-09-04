/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:36:30 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:25:54 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"
#include "../header/ClapTrap.hpp"
#include "../header/FragTrap.hpp"

int main(){
	FragTrap P1("P1");

	P1.attack("ennemy");
	P1.takeDamage(50);
	P1.beRepaired(40);
	P1.highFivesGuys();
	return 0;

}
