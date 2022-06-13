/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:36:30 by cvine             #+#    #+#             */
/*   Updated: 2022/06/13 17:56:23 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class	String {
	
	private:

		std::string	_str;

	public:

		String();
		String( std::string );
		String( String const & );
		String & operator = ( String const & );
		~String();

		std::string getStr( void );

		operator char ();
		operator int ();
		operator float ();
		operator double ();
		
		class	NonDisplayableException : public std::exception {
			public:
				const char *what() const throw();
		};

};
