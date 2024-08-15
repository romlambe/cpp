/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:41:19 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 16:05:08 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria{

public:
	Ice();
	Ice(Ice const & src);
	Ice & operator=(Ice const & src);
	~Ice();

	AMateria *clone() const;
	void use(ICharacter & target);
};

#endif
