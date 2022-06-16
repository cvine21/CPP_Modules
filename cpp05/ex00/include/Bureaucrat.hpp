/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/16 11:42:07 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

// ************************************************************************** //
//                                Bureaucrat Class                            //
// ************************************************************************** //

class	Bureaucrat {

	private:

		const std::string	_name;
		int					_grade;
	
	public:

		Bureaucrat( void );
		Bureaucrat( std::string const, int );
		Bureaucrat( Bureaucrat const & );
		Bureaucrat & operator = ( Bureaucrat const & );
		~Bureaucrat( void );

		const std::string	getName( void ) const;
		int					getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );

		class	GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

};

std::ostream & operator << ( std::ostream &out, Bureaucrat const & );

#endif /* __BUREAUCRAT_HPP__ */