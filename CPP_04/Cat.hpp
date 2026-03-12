/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:32:01 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 11:34:15 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

class Cat{
	private:

	public:
		~Cat();
		Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
};

#endif