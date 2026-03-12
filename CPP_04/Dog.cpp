/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:54:44 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 15:22:51 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog() {
	std::cout << "Destructor (Dog) Called for" << std::endl;
}

Dog::Dog() : Animal() {
	std::cout << "Constructor (Dog) called ---" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Constructor copy (Dog) called ---" << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout << "Operator copy (Dog) called ---" << std::endl;
	if (this != &other)
		Dog::operator=(other);
	return *this;
}

void Dog::makeSound() const {
	std::cout << "AUAU" << std::endl;
}