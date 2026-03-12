/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:32:04 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 15:00:07 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	private:
		
	public:
		~Dog();
		Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		virtual void makeSound() const;
		Dog(std::string name);
};

#endif