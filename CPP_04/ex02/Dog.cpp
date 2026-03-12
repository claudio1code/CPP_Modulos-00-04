/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:54:44 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 17:18:04 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog() {
	std::cout << "Destructor (Dog) Called for" << std::endl;
	delete this->brain;
}

Dog::Dog() : Animal() {
	std::cout << "Constructor (Dog) called ---" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Constructor copy (Dog) called ---" << std::endl;
	this->brain = new Brain;
	*(this->brain) = *(other.brain);
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout << "Operator copy (Dog) called ---" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "AUAU" << std::endl;
}

Brain& Dog::getBrain() {
	return (*brain);
}
