/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:18:10 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 18:14:22 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default Constructor Called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
	std::cout << "ClapTrap Copy Constructor Called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << "ClapTrap Parametarized Constructor Called for " << this->_name << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other){
	std::cout << "ClapTrap Copy Assignment Operator Called for " << this->_name << std::endl; 
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) 
	: _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage){
		std::cout << "ClapTrap Parametarized Constructor Called for " << this->_name << std::endl;
	}

void	ClapTrap::attack(const std::string& target){
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " Can't Attack (no energy or dead)!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " 
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints == 0){
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount <<  " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired because it has no energy points" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit point, hit points now is " << this->_hitPoints << std::endl; 
}

ClapTrap::~ClapTrap(){
	std::cout << "The Constructor of the ClapTrap " << this->_name << " was destroyed " << std::endl;
}
