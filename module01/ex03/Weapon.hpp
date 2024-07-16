/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:24:51 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/16 15:09:22 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{

private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string _type);
	~Weapon();
	std::string const &getType();
	void setType(std::string newtype);
};

#endif
