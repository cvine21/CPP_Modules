/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:28 by cvine             #+#    #+#             */
/*   Updated: 2022/06/12 12:31:51 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

// ************************************************************************** //
//                                  Mandatory                                 //
// ************************************************************************** //

Bureaucrat::Bureaucrat( void ) : _name("Noname"), _grade(150) {}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name) {

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

// ************************************************************************** //
//                                  Accessors                                 //
// ************************************************************************** //

const std::string	Bureaucrat::getName( void ) const { return _name; }
int					Bureaucrat::getGrade( void ) const { return _grade; }

// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

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

void	Bureaucrat::signForm( Form & f ) {

	try {
		f.beSigned(*this);
		std::cout << getName() << " signed " << f.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << getName() << " coudn't sign " << f.getName()
		<< " because " << e.what() << std::endl;
	}

};

std::ostream & operator << ( std::ostream &out, Bureaucrat const & b ) {

	out << b.getName() << ", bureaucrat grade " << b.getGrade();

	return out;

}

// ************************************************************************** //
//                                Exception classes                           //
// ************************************************************************** //

const char*	Bureaucrat::GradeTooHighException::what() const throw() {

	return "Grade is too high!";

}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {

	return "Grade is too low!";

};