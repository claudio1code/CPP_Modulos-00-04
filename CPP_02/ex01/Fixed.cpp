/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:13:09 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/09 14:24:35 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : number(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->number = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->number =  n << bitsNumber;
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(n * (1 << bitsNumber));
}

int	Fixed::getRawBits(void) const{
	return number;
}

void	Fixed::setRawBits(int const raw){
	this->number = raw;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const{
	return (float)this->number / (1 << bitsNumber);
}

int		Fixed::toInt(void) const{
	return this->number >> bitsNumber;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os  << obj.toFloat();
	return os;
}
