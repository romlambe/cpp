/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:58:08 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/12 12:19:12 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string _name);
	~Zombie();
	void announce();
	void setName(std::string name);
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
	Zombie* zombieHorde(int N, std::string name);
};
