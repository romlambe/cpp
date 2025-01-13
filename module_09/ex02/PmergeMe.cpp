/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:00:13 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/19 16:40:15 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){};

PmergeMe::PmergeMe(const PmergeMe &src){
	*this = src;
};

PmergeMe::~PmergeMe(){};

PmergeMe & PmergeMe::operator=(const PmergeMe &other){
	if (this != &other){
		this->args = other.args;
		this->vector_sorted = other.vector_sorted;
		this->vector_duration = other.vector_duration;
		this->list_sorted = other.list_sorted;
		this->list_duration = other.list_duration;
	}
	return *this;
};

int is_sorted(const std::vector<int> &v){
	for(size_t i = 0; i < v.size() - 1; i++){
		if (v[i] > v[i + 1])
			return 0;
	}
	return 1;
}

int digital_string(const char *str){
	while(*str){
		if (!std::isdigit(*str))
			return 0;
		str++;
	}
	return 1;
}

int PmergeMe::parse_args(char **av){
	int i = 0;

	while (av[i]){
		if (!digital_string(av[i])){
			std::cout << "Error: " << av[i] << "isn't a number" << std::endl;
			return 1;
		}
		long num = std::atol(av[i]);
		if (num < 0){
			std::cout << "Error: " << av[i] << "isn't a positive number" << std::endl;
			return 1;
		}
		else if (num > INT_MAX){
			std::cout << "Error: " << av[i] << "must be smaller than INT MAX " << std::endl;
			return 1;
		}
		args.push_back(static_cast<int>(num));
		i++;
	}
	return 0;
}

int PmergeMe::merge_vector(){
	std::clock_t start_timer = std::clock();
	double duration;

	if (is_sorted(this->args)){
		std::cout << "Already sorted" << std::endl;
		this->vector_sorted = this->args;
		return 1;
	}
	if (this->args.size() == 1){
		this->vector_sorted.push_back(this->args[0]);
		std::cout << "Only one number" << std::endl;
		return 1;
	}

	std::vector<std::pair<int,int> > pairs;
	for (size_t i = 0; i < this->args.size(); i += 2){
		if (i + 1 < args.size())
			if (this->args[i] > this->args[i + 1])
				pairs.push_back(std::make_pair(this->args[i + 1], this->args[i]));
			else
				pairs.push_back(std::make_pair(this->args[i], this->args[i + 1]));
		else{
			pairs.push_back(std::make_pair(-1, this->args[i]));
		}
	}
	std::vector<int> mins;
	for (std::vector<std::pair<int,int> >::const_iterator it = pairs.begin(); it != pairs.end() ; ++it){
		if (it->first != -1){
			mins.push_back(it->first);
		}
	}

	std::sort(mins.begin(), mins.end());

	for (std::vector<std::pair<int, int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it){
			std::vector<int>::iterator pos = std::lower_bound(mins.begin(), mins.end(), it->second);
			mins.insert(pos, it->second);
	}
	this->vector_sorted = mins;

	duration = static_cast<double>(std::clock() - start_timer) / CLOCKS_PER_SEC * 1000;

	this->vector_duration = duration;
	return 0;
}

int PmergeMe::merge_list(){
	std::clock_t start_time = std::clock();
	double duration;

	if (is_sorted(this->args)){
		std::cout << "Already is sorted" << std::endl;
		this->list_sorted.assign(this->args.begin(), this->args.end());
		return 1;
	}
	if (this->args.size() == 1){
		this->list_sorted.push_back(this->args[0]);
		this->list_duration = (std::clock() - start_time) / static_cast<double>(CLOCKS_PER_SEC);
		std::cout << "Only one number" << std::endl;
		return 1;
	}
	std::list<std::pair<int, int> > pairs;
	for(size_t i = 0; i < this->args.size(); i+= 2){
		if (i + 1 < args.size()){
			if(this->args[i] > this->args[i + 1])
				pairs.push_back(std::make_pair(this->args[i + 1], this->args[i]));
			else
				pairs.push_back(std::make_pair(this->args[i], this->args[i + 1]));
		}
		else
			pairs.push_back(std::make_pair(-1, this->args[i]));
	}
	std::list<int> mins;
	for(std::list<std::pair<int, int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it){
		if(it->first != -1){
			mins.push_back(it->first);
		}
	}

	mins.sort();
	std::list<int> sorted_list = mins;
	for(std::list<std::pair<int, int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it){
		std::list<int>::iterator pos = sorted_list.begin();
		for (; pos != list_sorted.end(); ++pos){
			if (*pos >= it->second)
				break;
		}
		sorted_list.insert(pos, it->second);
	}
	this->list_sorted = sorted_list;

	duration = static_cast<double>(std::clock() - start_time) / CLOCKS_PER_SEC * 1000;

	this->list_duration = duration;
	return 0;
}


void PmergeMe::display(){
	std::cout << "Before: ";
	for (std::vector<int>::const_iterator it = args.begin(); it != args.end(); ++it){
		std::cout << *it << " " ;
	}
	std::cout << std::endl;
	std::cout << "After: ";
	for (std::vector<int>::const_iterator it = vector_sorted.begin(); it != vector_sorted.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << args.size() << " elements with std::vector : " << vector_duration << std::endl;
	std::cout << "Time to process a range of " << args.size() << " elements with std::list : " << list_duration << std::endl;
}
