/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:40:21 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 14:53:07 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal() {}

Animal::Animal() : _type("ANIMAL") {}

Animal::Animal(const Animal& other) : _type(other._type) {}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string	Animal::getType()const{
	return _type;
}

void	Animal::makeSound() const {
	std::cout << "Sem Som" << std::endl;
}
