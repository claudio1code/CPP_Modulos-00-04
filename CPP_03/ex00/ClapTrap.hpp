/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:39:43 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 17:46:27 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
		
	public:
	~ClapTrap();
	ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap(std::string name);
	ClapTrap&	operator=(const ClapTrap& other);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif