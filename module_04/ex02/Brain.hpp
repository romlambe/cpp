/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:20:26 by romlambe          #+#    #+#             */
/*   Updated: 2024/09/03 15:13:35 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
protected:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain const &src);
	Brain & operator=(Brain const &rhs);
	~Brain();
};

#endif
