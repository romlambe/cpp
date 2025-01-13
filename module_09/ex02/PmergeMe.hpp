/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:00:11 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/19 16:32:30 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <cctype>
#include <ctime>

class PmergeMe{
private:
	std::vector<int> args;
	std::vector<int> vector_sorted;

	double vector_duration;


	std::list<int> list_sorted;
	double list_duration;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &src);
	~PmergeMe();
	PmergeMe &operator=(const PmergeMe &other);

	int parse_args(char **);
	int merge_vector();
	int merge_list();
	void display();
};
