/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:37:39 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 15:14:43 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap(void);

	void attack(const std::string &target);
	void guardGate(void);
};

#endif
