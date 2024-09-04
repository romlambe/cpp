/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:38:46 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 15:12:33 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

private:
	std::string _name;

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	DiamondTrap & operator=(DiamondTrap const & rhs);
	~DiamondTrap();

	void whoAmI();
	void attack(const std::string &target);

};

#endif
