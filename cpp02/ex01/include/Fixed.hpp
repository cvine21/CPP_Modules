/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/28 20:04:37 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"

// ************************************************************************** //
//                                Fixed Class                                 //
// ************************************************************************** //

class Fixed {

	public:

		Fixed();
		Fixed( int const n );
		Fixed( float const n );
		Fixed( Fixed const& x );
		~Fixed();
		Fixed & operator = (Fixed const& x );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
	
		int					value;
		static int const	fractionalBits = 8;

};

std::ostream &operator << ( std::ostream &out, Fixed const &f );

#endif /* __FIXED_HPP__ */