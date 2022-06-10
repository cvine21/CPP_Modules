/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 15:54:05 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <exception>
# include <iostream>

// ************************************************************************** //
//                                 Form Class                                 //
// ************************************************************************** //

class	Bureaucrat;

class	Form {

	private:

		const std::string 	_name;
		bool				_isSign;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public:

		Form( void );
		Form( std::string const, int const, int cosnt );
		Form( Form const & );
		Form & operator = ( Form const & );
		virtual ~Form( void );

		const std::string 	getName( void ) const;
		bool				getIsSign( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExec( void ) const;
		void				beSigned( Bureaucrat & );
		virtual void		execute( Bureaucrat const & ) const = 0;

		class	GradeTooHighException : public std::exception {
			public:
				const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				const char*	what() const throw();
		};

};

std::ostream & operator << ( std::ostream &out, Form const & );

#endif /* __FORM_HPP__ */