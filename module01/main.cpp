/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:00:43 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/11 16:08:29 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie *zombie = NULL;

	zombie = zombie->newZombie("Foo");
	zombie->announce();
	zombie->randomChump("Foo2");
	delete(zombie);
	return 0;
}
