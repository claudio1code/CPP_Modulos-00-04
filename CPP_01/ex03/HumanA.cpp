/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:34:45 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:13:58 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon):name(name),weapon(weapon) {
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << '\n';
}
