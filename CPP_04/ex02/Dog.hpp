/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:32:04 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/13 15:37:53 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain	*brain;
	public:
		~Dog();
		Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		Dog(std::string name);
		
		virtual void makeSound() const;
		Brain&	getBrain();
};

#endif