/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 15:48:12 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

// ************************************************************************** //
//                                Point Class                                 //
// ************************************************************************** //

class Point {

	public:

		Point( void );
		Point( Point const& );
		Point( float const, float const );
		Point & operator = ( Point const& );
		~Point( void );

		Fixed const getX( void ) const;
		Fixed const getY( void ) const;

	private:
	
		Fixed const	x;
		Fixed const	y;

};

bool bsp( Point const, Point const, Point const, Point const );

#endif /* __POINT_HPP__ */