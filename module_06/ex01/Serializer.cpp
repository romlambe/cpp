/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:38 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/15 14:14:22 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer(){}

Serializer::Serializer(Serializer const &src){
	*this = src;
}

Serializer::~Serializer(){}

Serializer & Serializer::operator=(Serializer const &other){
	static_cast<void>(other);
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
