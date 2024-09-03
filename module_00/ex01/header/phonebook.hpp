/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:29:09 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/10 09:58:29 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"

class Phonebook{
private:
	Contact tab[8];
	int		index;
public:
	Phonebook(void);
	~Phonebook(void);
	void	add();
	void	search();
};

#endif
