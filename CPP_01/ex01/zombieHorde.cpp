/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:57:23 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/03 17:13:29 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *zombies;
	if (N <= 0)
		return NULL;
	zombies = new Zombie[N];
	for(int i = 0; i < N; i++){
		zombies[i].setName(name);
	}
	return zombies;
}
