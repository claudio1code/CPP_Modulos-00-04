/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:56:20 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 18:06:18 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{
	private:

	public:
		~FragTrap();
		FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap(std::string name);
		FragTrap&	operator=(const FragTrap& other);
		void		attack(const std::string& target);
		void		highFivesGuys(void);
};

#endif