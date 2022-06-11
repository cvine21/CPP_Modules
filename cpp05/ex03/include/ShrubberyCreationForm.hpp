/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:44 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 14:07:28 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# define TREE	\
"     ccee88oo          \n\
   C8O8O8Q8PoOb o8oo    \n\
  dOB69QO8PdUOpugoO9bD  \n\
 CgggbU8OU qOp qOdoUOdcb\n\
	6OuU  /p u gcoUodpP \n\
	   \\\\//  /douUP   \n\
		 \\\\////       \n\
		  |||/\\        \n\
		  |||\\/        \n\
		  |||||         \n\
  .....\\//||||\\....  \n"

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

#endif /* __SHRUBBERYCREATIONFORM_HPP__ */