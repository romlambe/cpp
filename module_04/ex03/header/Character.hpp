/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:29:36 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 16:51:38 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
private:
	std::string _name;
	AMateria* _inventory[4];

public:
	Character();
	Character(std::string const & name);
	Character(Character const & src);
	Character & operator=(Character const & src);
	virtual ~Character();

	std::string const & getName()const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);
};

#endif
