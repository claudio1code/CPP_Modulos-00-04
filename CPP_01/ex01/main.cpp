/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:13:52 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 09:56:45 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int numZombies = 3;

	Zombie	*zombies = zombieHorde(numZombies, "ZOMBI X_X: ");
	for (int i = 0; i < numZombies; i++){
		zombies[i].announce();
	}
	delete[] zombies;
	return 0;
}
