/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:07:47 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/10 15:41:30 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed	crossProduct(Point const a, Point const b, Point const p) {
	return (a.getX() - p.getX()) * (b.getY() - p.getY()) - (b.getX() - p.getX()) * (a.getY() - p.getY());
} /* formula (A.x - P.x) * (B.y - P.y) - (B.x - P.x) * (A.y - P.y) */

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed cp1 = crossProduct(a, b, point);
	Fixed cp2 = crossProduct(b, c, point);
	Fixed cp3 = crossProduct(c, a, point);

	if (cp1 == Fixed(0) || cp2 == Fixed(0) || cp3 == Fixed(0)){
		return false;
	}

	bool have_negative = (cp1 < Fixed(0) || cp2 < Fixed(0) || cp3 < Fixed(0));
	bool have_positive = (cp1 > Fixed(0) || cp2 > Fixed(0) || cp3 > Fixed(0));

	if (have_negative == true && have_positive == true)
		return false;
	
	return true;
}