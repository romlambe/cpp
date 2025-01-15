/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:05:00 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/15 14:23:52 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {

  Base *base = generate();
  identify(base);
  identify(*base);
  delete base;
  return 0;
}
