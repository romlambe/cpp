/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:19:03 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/09 14:14:40 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	(void) av;
	int i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(i < ac)
	{
		int j = 0;
		while(av[i][j])
		{
			int transform = av[i][j];
			char res = std::toupper(transform);
			std::cout << res;
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;
}
