/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:36:39 by romlambe          #+#    #+#             */
/*   Updated: 2024/11/04 16:10:00 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap (T &a, T &b){
	T c = a;
	a = b;
	b = c
}

template <typename T>
T min(T a, T b){
	return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b){
	return (a > b) ? a : b;
}
