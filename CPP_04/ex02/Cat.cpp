/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:53:38 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/13 15:43:08 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat() {
	std::cout << "Destructor (Cat) Called " << std::endl;
		delete this->brain;
}

Cat::Cat() : Animal() {
	std::cout << "Constructor (Cat) called ---" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain;
	for (int i = 0; i < Brain::_number_of_ideas; i++)
		this->brain->setIdea("eae felas", i);
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Constructor copy (Cat) called ---" << std::endl;
	this->brain = new Brain;
	*(this->brain) = *(other.brain);
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout << "Operator copy (Cat) called ---" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MIAU" << std::endl;
}

Brain& Cat::getBrain() {
	return (*brain);
}
