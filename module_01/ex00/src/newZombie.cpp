/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:53:54 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:36:58 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

// /**
//  * @brief Ceci est le descriptiif de ta function deso le azerty
//  *
//  * @param name
//  * @return Zombie*
//  */

Zombie *Zombie::newZombie(std::string name){
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	return (zombie);
}
