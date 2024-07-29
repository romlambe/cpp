/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:42:28 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/12 12:14:11 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
