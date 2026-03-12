/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:54:49 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/10 15:43:42 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		
	public:
		~Point();
		Point();
		Point(const float y, const float x);
		Point(const Point& other);
		Point& operator=(const Point& other);

		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif