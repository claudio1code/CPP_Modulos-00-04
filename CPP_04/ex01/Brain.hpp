/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:24:27 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 16:44:32 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	protected:
		std::string ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
		Brain(std::string name);

		std::string getIdea(int idx) const;
		void		setIdea(const std::string, int idx);
};

#endif