/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:34:28 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/04 14:06:08 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		const std::string&	getType() const;
		void				setType(const std::string& type);
		Weapon(std::string weaponName);
};

#endif