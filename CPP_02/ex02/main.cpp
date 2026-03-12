/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:48:57 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/10 14:37:59 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}
