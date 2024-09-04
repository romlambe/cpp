/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:26:54 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/04 14:16:23 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP


#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{
private:
	std::string _name;
	Weapon &weapon;

public:
	HumanA(std::string _name, Weapon &weapon);
	~HumanA();
	void attack(void);
	std::string getName(void);
};

#endif
