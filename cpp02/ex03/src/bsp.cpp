/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:58:12 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 16:10:35 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	area(Point const a, Point const b, Point const c) {

	float	area;
	
	area = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
			b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
			c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2;

	return (area >= 0 ? area : area * (-1));

}

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	float	abcArea = area(a, b, c);
	float	abpointArea = area(a, b, point);
	float	bcpointArea = area(b, c, point);
	float	capointArea = area(c, a, point);

	return (abcArea == abpointArea + bcpointArea + capointArea
			&& abpointArea != 0
			&& bcpointArea != 0
			&& capointArea != 0);

}