/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:21:47 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/15 15:07:12 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>


typedef struct Data{
	std::string name;
	int age;
} Data;

class Serializer{
private:
	Serializer();
	Serializer(Serializer const &src);
	~Serializer();
	Serializer & operator=(Serializer const &other);

	std::string src;
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif
