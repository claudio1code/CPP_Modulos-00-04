/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:46:12 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/03 16:57:17 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name(""){
}

Zombie::Zombie(std::string name) : name(name){
}

Zombie::~Zombie(){
	std::cout << name << ": diead" << std::endl;
}

void	Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}