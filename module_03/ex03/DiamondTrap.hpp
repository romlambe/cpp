/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:38:46 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/01 11:31:48 by romlambe         ###   ########.fr       */
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

};

#endif
