/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:28 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 20:31:23 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Noname"), _grade(150) {}

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name) {

	if (grade > 150) {
		throw GradeTooLowException();
	} else if (grade < 1) {
		throw GradeTooHighException();
	}
	_grade = grade;

}

Bureaucrat::Bureaucrat( Bureaucrat const & b)
: _name(b.getName()), _grade(b.getGrade()) { }

Bureaucrat & Bureaucrat::operator = ( Bureaucrat const & b ) {

	if (this != &b)
		_grade = b.getGrade();

	return *this;

}

Bureaucrat::~Bureaucrat( void ) {}

std::string const	Bureaucrat::getName( void ) const { return _name; }

int					Bureaucrat::getGrade( void ) const { return _grade; }

void	Bureaucrat::incrementGrade( void ) {

	if (getGrade() - 1 < 1)
		throw GradeTooHighException();
	_grade--;

};

void	Bureaucrat::decrementGrade( void ) { 

	if (getGrade() + 1 > 150)
		throw GradeTooLowException();
	_grade++;

};

std::ostream & operator << ( std::ostream &out, Bureaucrat const & b ) {

	out << b.getName() << ", bureaucrat grade " << b.getGrade();

	return out;

}