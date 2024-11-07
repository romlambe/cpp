/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:18:05 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/07 15:37:12 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Mutant Stack" << std::endl;
	std::cout << "Top: "<<mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout<<std::endl;
	std::cout << "Stack:" <<std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << std::endl;
	std::cout << "List" << std::endl;
	std::cout << "Top: " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "Size: " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator at = mlist.begin();
	std::list<int>::iterator ate = mlist.end();
	++at;
	--at;
	std::cout<<std::endl;
	std::cout << "Stack:" <<std::endl;
	while (at != ate) {
		std::cout << *at << std::endl;
		++at;
	}
	// std::stack<int> s(mlist);

	return 0;
}
