/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:26:52 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/16 15:14:28 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
	std::string _name;
	Weapon *weapon;

public:
	HumanB(std::string _name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif
