/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:57:43 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/21 17:38:58 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
   if (ac < 2)
   {
		std::cout << "Usage: ./PmergeMe <number1> <number2> ..." << std::endl;
		return (1);
   }
   PmergeMe merge;

   if (merge.parse_args(av + 1))
	  return (1);

   if (merge.merge_vector() || merge.merge_list())
	  return (1);

   merge.display();

   return (0);
}
