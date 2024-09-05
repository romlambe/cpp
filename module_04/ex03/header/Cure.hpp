/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:41:03 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/08 15:55:23 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{

public:
	Cure();
	Cure(Cure const & src);
	Cure & operator=(Cure const & src);
	~Cure();

	AMateria *clone() const;
	void use(ICharacter & target);
};

#endif
