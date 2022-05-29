/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 13:17:01 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include "iostream"

// ************************************************************************** //
//                                Fixed Class                                 //
// ************************************************************************** //

class Fixed {

	public:

		Fixed( void );
		Fixed( int const );
		Fixed( float const );
		Fixed( Fixed const& );
		~Fixed( void );
		Fixed & operator = (Fixed const& );

		int		getRawBits( void ) const;
		void	setRawBits( int const );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		bool	operator > ( const Fixed & ) const;
		bool	operator < ( const Fixed & ) const;
		bool	operator >= (const Fixed & ) const;
		bool	operator <= (const Fixed & ) const;
		bool	operator == (const Fixed & ) const;
		bool	operator != (const Fixed & ) const;

		Fixed	operator + ( const Fixed & ) const;
		Fixed	operator - ( const Fixed & ) const;
		Fixed	operator * ( const Fixed & ) const;
		Fixed	operator / ( const Fixed & ) const;

		Fixed	operator ++ ( void );
		Fixed	operator -- ( void );
		Fixed	operator ++ ( int );
		Fixed	operator -- ( int );

		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);

	private:
	
		int					value;
		static int const	fractionalBits = 8;

};

std::ostream &operator << ( std::ostream &out, Fixed const &f );

#endif /* __FIXED_HPP__ */