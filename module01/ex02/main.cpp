/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:13:36 by romlambe          #+#    #+#             */
/*   Updated: 2024/07/12 16:22:16 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "address string: " << &str << std::endl;
	std::cout << "adress ptr: "<< ptr << std::endl;
	std::cout << "addres ref: "<< &ref << std::endl;

	std::cout << "str: " << str << std::endl;
	std::cout << "ptr: " << *ptr << std::endl;
	std::cout << "ref: " << ref << std::endl;
	return 0;
}
