/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:54:55 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 17:30:54 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{
	private:

	public:
		~ScavTrap();
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap(std::string name);
		ScavTrap&	operator=(const ScavTrap& other);
		void		attack(const std::string& target);
		void 		guardGate();
};

#endif