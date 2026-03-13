/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:24:27 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/13 15:36:00 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{

	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
		Brain(std::string name);

		std::string			getIdea(int idx) const;
		void				setIdea(const std::string idea, int idx);
		static const int	_number_of_ideas = 100;
		
	protected:
		std::string ideas[_number_of_ideas];
};

#endif