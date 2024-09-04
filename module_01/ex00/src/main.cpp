/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:00:43 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:37:08 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

int main(void){
	Zombie *zombie = NULL;

	zombie->newZombie("");

	zombie = zombie->newZombie("Foo");
	zombie->announce();
	zombie->randomChump("Foo2");
	delete(zombie);
	return 0;
}
