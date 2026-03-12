/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:34:33 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:05:13 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon*		weapon;
	public:
		HumanB(const std::string& name);
		void	setWeapon(Weapon& weapon);
		void	attack(void);
};

#endif