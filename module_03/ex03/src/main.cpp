/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:36:30 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/05 15:21:41 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"
#include "../header/ClapTrap.hpp"
#include "../header/FragTrap.hpp"
#include "../header/DiamondTrap.hpp"

// int main()
// {
// 	DiamondTrap D("Diamond");

// 	D.attack("ennemy");
// 	D.takeDamage(20);
// 	D.beRepaired(10);
// 	D.whoAmI();
// 	return (0);
// }

int main() {
	ClapTrap clap("CL4P-TP");

	clap.attack("target");
	clap.takeDamage(3);
	clap.beRepaired(5);

	ScavTrap scav("SC4V-TP");

	scav.attack("target");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();

	FragTrap frag("FR4G-TP");

	frag.attack("target");
	frag.takeDamage(50);
	frag.beRepaired(50);
	frag.highFivesGuys();

	DiamondTrap diamond("DI4M-TP");

	diamond.attack("target");
	diamond.whoAmI();

	return 0;
}
