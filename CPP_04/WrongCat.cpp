/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:31:50 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 15:46:08 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::~WrongCat() {
	std::cout << "Destructor (Wrong Cat) Called for" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "Cat";
	std::cout << "Constructor (Wrong Cat) called ---" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "Constructor copy (Wrong Cat) called ---" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "Operator copy (Wrong Cat) called ---" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "MIAU" << std::endl;
}
