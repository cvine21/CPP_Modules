/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:08:48 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 12:04:01 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

// ************************************************************************** //
//                                  Mandatory                                 //
// ************************************************************************** //

PresidentialPardonForm::PresidentialPardonForm( void )
: Form("PPF", 25, 5), _target("<default target>") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target )
: Form("PPF", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & f )
: _target(f._target) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm & PresidentialPardonForm
::operator = ( const PresidentialPardonForm & f) {

	if (this != &f)
		_target = f._target;

	return *this;

}

// ************************************************************************** //
//                                  Accessors                                 //
// ************************************************************************** //

const std::string	PresidentialPardonForm::getTarget( void ) const {

	return _target;

}

// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox";
	std::cout << std::endl;

}
