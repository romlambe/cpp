/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:59:22 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:36:17 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

void Zombie::randomChump(std::string name){
	Zombie zombie;

	zombie.setName(name);
	zombie.announce();
}
