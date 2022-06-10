/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:44 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 15:57:57 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <exception>
# include <iostream>

// ************************************************************************** //
//                         PresidentialPardonForm Class                       //
// ************************************************************************** //

class	Bureaucrat;

class	PresidentialPardonForm : public Form {

	private:

		std::string	_target;

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const );
		PresidentialPardonForm( PresidentialPardonForm const & );
		PresidentialPardonForm & operator = ( PresidentialPardonForm const & );
		~PresidentialPardonForm( void );

		std::string const	getTarget( void ) const;
		void				execute( Bureaucrat const & ) const;

};

std::ostream & operator << ( std::ostream &out, PresidentialPardonForm const & );

#endif /* __PRESIDENTIALPARDONFORM_HPP__ */