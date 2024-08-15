/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:42:28 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/15 11:53:09 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie{

private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce( void );
	void	setName(std::string name);
	Zombie *newZombie(std::string name);
	void	randomChump(std::string name);
};

#endif
