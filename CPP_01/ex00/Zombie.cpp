/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:42:42 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/03 16:36:04 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){
}

Zombie::Zombie() : name(){
}

Zombie::~Zombie(){
	std::cout << name << ": diead" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}