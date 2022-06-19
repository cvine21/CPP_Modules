/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:07:31 by cvine             #+#    #+#             */
/*   Updated: 2022/06/18 17:06:45 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <iostream>
# include <vector>

// ************************************************************************** //
//                                Span Class                                  //
// ************************************************************************** //

class Span {

	public:

		Span( void );
		Span( unsigned int );
		Span( Span const& );
		~Span( void );
		Span & operator = ( Span const& );


		unsigned int		getN( void ) const;
		std::vector<int>	getV( void ) const;
		
		void				addNumber( int );
		int					shortestSpan( void );
		int					longestSpan( void );

	private:
	
		unsigned int		_n;
		std::vector<int>	_values;

};

#endif /* __SPAN_HPP__ */