/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:01:36 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/29 12:30:59 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

private:
	std::string _name;
	unsigned int _hitPoint;
	unsigned int _energyPoint;
	unsigned int _attackPoint;
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amout);
};

#endif
