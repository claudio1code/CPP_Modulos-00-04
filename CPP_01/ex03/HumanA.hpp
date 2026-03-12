/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:34:42 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:04:38 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon&		weapon;
	public:
		HumanA(const std::string& name, Weapon& weapon);
		void	attack();
};

#endif