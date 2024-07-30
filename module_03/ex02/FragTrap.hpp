/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:42:50 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/30 14:22:48 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();

	void highFivesGuys(void);
};

#endif
