/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:58:27 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:38:28 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"
#include <string>

Zombie* Zombie::zombieHorde(int N, std::string name){
	Zombie *zombieHorde = NULL;
	zombieHorde= new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
