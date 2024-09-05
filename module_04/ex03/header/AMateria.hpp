/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:54:07 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 16:59:33 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria{

protected:
	std::string _type;

public:
	AMateria(std::string const & type);
	AMateria();
	AMateria(AMateria const & src);
	AMateria & operator=(AMateria const & src);
	virtual ~AMateria();


	std::string const & getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter & target);
};

#endif
