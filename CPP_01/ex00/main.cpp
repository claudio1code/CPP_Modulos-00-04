/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:43:27 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/03 16:30:03 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	std::cout << std::endl;
	Zombie *zombie;
	zombie = newZombie("Aaa");
	zombie->announce();
	delete zombie;
	std::cout << std::endl;

	std::cout << std::endl;
	randomChump("Bbb");
	std::cout << std::endl;
	return (0);
	
}