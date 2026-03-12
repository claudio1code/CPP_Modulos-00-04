/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:01:23 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 17:46:27 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(){
	std::cout << "The Constructor of the ScavTrap " << this->_name << " was destroyed" << std::endl; 
}

ScavTrap::ScavTrap() : ClapTrap("default", 100, 50, 20)  {
	std::cout << "ScavTrap Parametarized Constructor Called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap Copy Constructor Called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap Parametarized Constructor Called for " << this->_name << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap Copy Assignment Operator Called for " << this->_name << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void		ScavTrap::attack(const std::string& target) {
		if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " Can't Attack (no energy or dead)!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " 
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}