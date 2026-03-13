/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:45:51 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/13 15:44:03 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const int halfSize = 2;
	Animal* animals[halfSize * 2];
	
	std::cout << std::endl << "--constructor--" << std::endl;
	for (int i = 0; i < halfSize; i++)
		animals[i] = new Dog();
	for (int i = halfSize; i < halfSize * 2; i++)
		animals[i] = new Cat();
	
	std::cout << std::endl << "--Ideia and Sound--" << std::endl;
	for (int i = 0; i < halfSize * 2; i++)
	{
		std::cout << animals[i]->getType() << ", ";
		animals[i]->makeSound();
		std::cout << ", ";

		if (Dog* dog = dynamic_cast<Dog*>(animals[i]))
			std::cout << "Ideia: " << dog->getBrain().getIdea(0) << std::endl;

		else if (Cat* cat = dynamic_cast<Cat*>(animals[i]))
			std::cout << "Ideia: " << cat->getBrain().getIdea(0) << std::endl;
	}

	std::cout << std::endl << "--Destructor--" << std::endl;
	for (int i = 0; i < halfSize * 2; i++)
		delete animals[i];
	
	return (0);
}