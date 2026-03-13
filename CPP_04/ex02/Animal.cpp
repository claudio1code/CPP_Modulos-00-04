/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:40:21 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/13 15:43:27 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal() {
	std::cout << "Destructor (Animal) Called" << std::endl;
}

Animal::Animal() : _type("ANIMAL") {
	std::cout << "Constructor (Animal) called ---" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type) {
	std::cout << "Constructor copy (Animal) called ---" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout << "Operator copy (Animal) called ---" << std::endl;
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
