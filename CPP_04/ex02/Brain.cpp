/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:26:03 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 17:30:08 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain() {
	std::cout << "Destructor (Brain) Called for" << std::endl;
}

Brain::Brain() : ideas() {
	std::cout << "Constructor (Brain) called ---" << std::endl;
}

Brain::Brain(const Brain& other) : ideas(other.ideas) {
	std::cout << "Constructor copy (Brain) called ---" << std::endl;
}

Brain&	Brain::operator=(const Brain& other) {
	std::cout << "Operator copy (Brain) called ---" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int idx) const {
	return (this->ideas[idx]);
}


void		Brain::setIdea(const std::string idea, int idx) {
	this->ideas[idx] = idea;
}

