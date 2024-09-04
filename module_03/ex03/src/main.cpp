/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:36:30 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:31:49 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"
#include "../header/ClapTrap.hpp"
#include "../header/FragTrap.hpp"
#include "../header/DiamondTrap.hpp"

int main()
{
	DiamondTrap D("Diamond");

	D.attack("ennemy");
	D.takeDamage(20);
	D.beRepaired(10);
	D.whoAmI();
	return (0);
}
