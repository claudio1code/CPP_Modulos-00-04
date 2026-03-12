/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:32:01 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/12 16:54:32 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		~Cat();
		Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		Cat(std::string name);
		
		virtual	void makeSound() const;
		Brain&	getBrain();

};

#endif