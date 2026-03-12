/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:49:21 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/09 14:03:00 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
	private:
		int					number;
		static const int	bitsNumber = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed();

		Fixed(const int n);
		Fixed(const float n);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif