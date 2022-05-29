/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:50:14 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 15:55:14 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point( float const x, float const y ) : x(x), y(y) {}

Point::Point(Point const& point) : x(point.x), y(point.y) {}

Point & Point::operator = ( Point const& ) { return (*this); }

Point::~Point() {}

Fixed const Point::getX( void ) const { return this->x; }

Fixed const Point::getY( void ) const { return this->y; }
