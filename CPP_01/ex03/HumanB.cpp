/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:34:38 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:13:21 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

HumanB::HumanB(const std::string& name) : name(name),weapon(NULL){
}

void    HumanB::attack(void){
    if (this->weapon == NULL)
        std::cout << this->name << " attacks with their hands" << '\n';
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << '\n';
}
