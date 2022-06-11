/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:08:48 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 12:47:18 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

// ************************************************************************** //
//                                  Mandatory                                 //
// ************************************************************************** //

RobotomyRequestForm::RobotomyRequestForm( void )
: Form("RRF", 72, 45), _target("<default target>") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target )
: Form("RRF", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & f )
: _target(f._target) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm & RobotomyRequestForm
::operator = ( const RobotomyRequestForm & f) {

	if (this != &f)
		_target = f._target;

	return *this;

}

// ************************************************************************** //
//                                  Accessors                                 //
// ************************************************************************** //

const std::string	RobotomyRequestForm::getTarget( void ) const {

	return _target;

}

// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	srand (time(NULL));

	if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();

	std::cout << "Some drilling noises..." << std::endl;
	if (rand() % 2) {
		std::cout << getTarget() << " has been robotomized successfully";
	} else {
		std::cout << getTarget() << " robotomy failed";
	}
	std::cout << std::endl;

}
