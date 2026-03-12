/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:49:21 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/09 18:00:23 by clados-s         ###   ########.fr       */
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
		~Fixed();
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int n);
		Fixed(const float n);
		
		Fixed&	operator=(const Fixed& other);
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		bool operator>(const Fixed &copyClass) const;
		bool operator<(const Fixed &copyClass) const;
		bool operator>=(const Fixed &copyClass) const;
		bool operator<=(const Fixed &copyClass) const;
		bool operator==(const Fixed &copyClass) const;
		bool operator!=(const Fixed &copyClass) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		int		getRawBits(void) const;
		void	setRawBits(int const n);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif