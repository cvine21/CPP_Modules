/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:38:47 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 17:21:53 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

// ************************************************************************** //
//                                  Mandatory                                 //
// ************************************************************************** //

Form::Form( void )
: _name("Noname"), _isSign(false), _gradeToSign(150), _gradeToExec(150) {}

Form
::Form(const std::string name, int const gradeToSign, int const gradeToExec)
: _name(name), _isSign(false), _gradeToSign(gradeToSign),
_gradeToExec(gradeToExec) {

	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();

}

Form::Form( Form const & f )
: _name(f.getName()), _isSign(f.getIsSign()), _gradeToSign(f.getGradeToSign()),
_gradeToExec(f.getGradeToExec()) {}

Form::~Form( void ) {}

Form & Form::operator = ( Form const & f ) {

	if (this != &f)
		_isSign = f._isSign;

	return *this;

}

// ************************************************************************** //
//                                  Accessors                                 //
// ************************************************************************** //

const std::string	Form::getName( void ) const { return _name; }
bool				Form::getIsSign( void ) const { return _isSign; }
int					Form::getGradeToSign( void ) const { return _gradeToSign; }
int					Form::getGradeToExec( void ) const { return _gradeToExec; }

// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

void	Form::beSigned( Bureaucrat & b ) {

	if (b.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	_isSign = true;

}

std::ostream & operator << ( std::ostream &out, Form const & b ) {

	out << b.getName() << (b.getIsSign() ? " is signed, " : " is not signed, ")
	<< "grade to sign: "<< b.getGradeToSign()
	<<", grade to execute: " << b.getGradeToExec();

	return out;

}

// ************************************************************************** //
//                                Exception classes                           //
// ************************************************************************** //

const char*	Form::GradeTooHighException::what() const throw() {

	return "Grade is too high!";

}

const char*	Form::GradeTooLowException::what() const throw() {

	return "Grade is too low!";

};