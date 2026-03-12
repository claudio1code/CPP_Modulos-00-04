/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:45:18 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/09 11:35:55 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->number = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return number;
}

void Fixed::setRawBits( int const raw ){
	this->number = raw;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

