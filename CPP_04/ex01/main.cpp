/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:45:51 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 17:26:07 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const int size = 4;
	Animal* animals[size];
	
	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	for (int i = 0; i < size; i++)
	{
		if (Dog* dog = dynamic_cast<Dog*>(animals[i]))
		{
			dog->getBrain().setIdea("Quero passear", 0);
			dog->getBrain().setIdea("Quero brincar", 1);
		}

		if (Cat* cat = dynamic_cast<Cat*>(animals[i]))
		{
			cat->getBrain().setIdea("Quero carinho", 0);
			cat->getBrain().setIdea("Me sirva", 1);
		}
	}

	for (int i = 0; i < size; i++)
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
	for (int i = 0; i < size; i++)
		delete animals[i];
	
	return (0);
}