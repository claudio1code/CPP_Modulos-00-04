/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:56:27 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 18:02:14 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(){
	std::cout << "The Constructor of the FragTrap " << this->_name << " was destroyed" << std::endl; 
}

FragTrap::FragTrap() : ClapTrap("default", 100, 100, 30)  {
	std::cout << "FragTrap Parametarized Constructor Called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap Copy Constructor Called for " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap Parametarized Constructor Called for " << this->_name << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap Copy Assignment Operator Called for " << this->_name << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void		FragTrap::attack(const std::string& target) {
		if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " Can't Attack (no energy or dead)!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " 
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " Let's HIGH FIVE" << std::endl;
}
