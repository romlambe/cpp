/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:30:03 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:23:03 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

int main()
{
	ClapTrap P1("P1");
	ClapTrap P2("P2");

	P1.attack("P2");
	P2.takeDamage(10);
	P2.beRepaired(10);
	return (0);
}