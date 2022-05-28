/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/28 15:52:41 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// ************************************************************************** //
//                                Fixed Class                                 //
// ************************************************************************** //

class Fixed {

	public:

		Fixed();
		~Fixed();
		Fixed( Fixed const& x );
		Fixed & operator = (Fixed const& x );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
	
		int					value;
		static int const	numOfFractBits = 8;

};

#endif /* __FIXED_HPP__ */