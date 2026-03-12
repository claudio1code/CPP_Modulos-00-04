/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:34:35 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:17:13 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponName) : type(weaponName){
}

const std::string& Weapon::getType(void) const{
    return (this->type);
}

void    Weapon::setType(const std::string& type){
    this->type = type;
}