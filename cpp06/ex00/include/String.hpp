/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:36:30 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 14:38:08 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_HPP
# define STRING_HPP

#include <iostream>
#include <exception>

// ************************************************************************** //
//                                String Class  	                          //
// ************************************************************************** //

class	String {

	private:

		std::string	_str;

	public:

		String();
		String( std::string );
		String( String const & );
		String & operator = ( String const & );
		~String();

		operator char ();
		operator int ();
		operator float ();
		operator double ();

		std::string	getStr( void );

};

#endif /* __STRING_HPP__ */