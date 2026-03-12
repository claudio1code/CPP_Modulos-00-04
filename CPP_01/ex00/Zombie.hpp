/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:43:03 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/03 15:43:06 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		void announce(void);
		void setName(std::string name);
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif