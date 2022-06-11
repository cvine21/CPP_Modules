/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:44 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 14:07:24 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <exception>
# include <iostream>

// ************************************************************************** //
//                         RobotomyRequestForm Class                          //
// ************************************************************************** //

class	Bureaucrat;

class	RobotomyRequestForm : public Form {

	private:

		std::string	_target;

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string const );
		RobotomyRequestForm( RobotomyRequestForm const & );
		RobotomyRequestForm & operator = ( RobotomyRequestForm const & );
		~RobotomyRequestForm( void );

		std::string const	getTarget( void ) const;
		void				execute( Bureaucrat const & ) const;

};

#endif /* __ROBOTOMYREQUESTFORM_HPP__ */