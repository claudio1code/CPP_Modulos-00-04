/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:53:38 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 15:18:52 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat() {
	std::cout << "Destructor (Cat) Called for" << std::endl;
}

Cat::Cat() : Animal() {
	std::cout << "Constructor (Cat) called ---" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Constructor copy (Cat) called ---" << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout << "Operator copy (Cat) called ---" << std::endl;
	if (this != &other)
		Cat::operator=(other);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MIAU" << std::endl;
}
