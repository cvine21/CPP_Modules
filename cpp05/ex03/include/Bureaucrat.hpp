/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 17:00:40 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <exception>
# include <iostream>

// ************************************************************************** //
//                                Bureaucrat Class                            //
// ************************************************************************** //

class	Form;

class	Bureaucrat {

	private:

		const std::string	_name;
		int					_grade;
	
	public:

		Bureaucrat( void );
		Bureaucrat( const std::string, int );
		Bureaucrat( Bureaucrat const & );
		Bureaucrat & operator = ( Bureaucrat const & );
		~Bureaucrat( void );

		const std::string	getName( void ) const;
		int					getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );
		void				signForm( Form & );
		void				executeForm( Form const & );

		class	GradeTooHighException : public std::exception {
			public:
				const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				const char*	what() const throw();
		};

};

std::ostream & operator << ( std::ostream &out, Bureaucrat const & );

#endif /* __BUREAUCRAT_HPP__ */