/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:37 by romlambe          #+#    #+#             */
/*   Updated: 2025/01/16 15:14:55 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }

int main(void) {

    int x = 42;
    int y = 33;
    char a = 65;
    char b = 66;

    std::cout << "\n----- INT VALUE -----" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "\n----- INT MIN && MAX -----" << std::endl;
    std::cout << "min = " << min(x, y) << std::endl;
    std::cout << "max = " << max(x, y) << std::endl;
    std::cout << "\n----- SWAP INT -----" << std::endl;
    ::swap(x, y);
    std::cout << "swap x = " << x << std::endl;
    std::cout << "swap y = " << y << std::endl;

    std::cout << "\n----- CHAR VALUE -----" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "\n----- CHAR MIN && MAX -----" << std::endl;
    std::cout << "min = " << min(a, b) << std::endl;
    std::cout << "max = " << max(a, b) << std::endl;
    std::cout << "\n----- SWAP CHAR -----" << std::endl;
    ::swap(a, b);
    std::cout << "swap a = " << a << std::endl;
    std::cout << "swap b = " << b << std::endl;
}
