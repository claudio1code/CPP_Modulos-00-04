/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:13:09 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/09 18:00:19 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::~Fixed(){
}

Fixed::Fixed() : number(0){
}

Fixed::Fixed(const Fixed& other){
	*this = other;
}

Fixed::Fixed(const int n){
	this->number =  n << bitsNumber;
}

Fixed::Fixed(const float n){
	this->number = roundf(n * (1 << bitsNumber));
}

Fixed&	Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->number = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed result;
	
	result.setRawBits(this->number + other.number);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed result;
	
	result.setRawBits(this->number - other.number);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed result;
	
	result.setRawBits((this->number * other.number) >> bitsNumber);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed result;
	
	result.setRawBits((this->number << bitsNumber) / other.number);
	return (result);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->number > other.number);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->number < other.number);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->number >= other.number);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->number <= other.number);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->number == other.number);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->number != other.number);
}

Fixed& Fixed::operator++()
{
	number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	number++;
	return (temp);
}

Fixed& Fixed::operator--()
{
	number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	number--;
	return (temp);
}

int	Fixed::getRawBits(void) const{
	return number;
}

void	Fixed::setRawBits(int const n){
	this->number = n;
}

float	Fixed::toFloat(void) const{
	return (float)this->number / (1 << bitsNumber);
}

int		Fixed::toInt(void) const{
	return this->number >> bitsNumber;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os  << obj.toFloat();
	return os;
}
