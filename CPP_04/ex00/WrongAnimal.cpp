/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:31:45 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 15:46:56 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor (Wrong Animal) Called for" << std::endl;
}

WrongAnimal::WrongAnimal() : _type("Animal"){
	std::cout << "Constructor (Wrong Animal) called ---" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type){
	std::cout << "Constructor copy (Wrong Animal) called ---" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
	std::cout << "Operator copy (Wrong Animal) called ---" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	WrongAnimal::getType()const{
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Sem Som" << std::endl;
}
