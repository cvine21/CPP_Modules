/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:44 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 15:38:38 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <exception>
# include <iostream>

// ************************************************************************** //
//                                  Intern Class                              //
// ************************************************************************** //

class	Bureaucrat;

class	Intern : public Bureaucrat {

	public:

		Intern( void );
		Intern( Intern const & );
		Intern & operator = ( Intern const & );
		~Intern( void );

		Form	*makeForm( std::string, std::string );

		class	NonExistentNameException : public std::exception {
			public:
				const char*	what() const throw();
		};

};

#endif /* __INTERN_HPP__ */