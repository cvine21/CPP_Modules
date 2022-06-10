/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:44 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 15:54:27 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <exception>
# include <iostream>

// ************************************************************************** //
//                         ShrubberyCreationForm Class                        //
// ************************************************************************** //

class	Bureaucrat;

class	ShrubberyCreationForm : public Form {

	private:

		std::string	_target;

	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string const );
		ShrubberyCreationForm( ShrubberyCreationForm const & );
		ShrubberyCreationForm & operator = ( ShrubberyCreationForm const & );
		~ShrubberyCreationForm( void );

		std::string const	getTarget( void ) const;
		void				execute( Bureaucrat const & ) const;

};

std::ostream & operator << ( std::ostream &out, ShrubberyCreationForm const & );

#endif /* __SHRUBBERYCREATIONFORM_HPP__ */