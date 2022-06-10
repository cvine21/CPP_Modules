/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:08:48 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 17:35:56 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

// ************************************************************************** //
//                                  Mandatory                                 //
// ************************************************************************** //

ShrubberyCreationForm::ShrubberyCreationForm( void )
: Form("SCF", 145, 137), _target("<default target>") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target )
: Form("SCF", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & f )
: _target(f._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm & ShrubberyCreationForm
::operator = ( const ShrubberyCreationForm & f) {

	if (this != &f)
		_target = f._target;

	return *this;

}

// ************************************************************************** //
//                                  Accessors                                 //
// ************************************************************************** //

const std::string	ShrubberyCreationForm::getTarget( void ) const {

	return _target;

}

// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {

	std::ofstream	file;

	std::string	tree =
	"     ccee88oo          \n"
	"  C8O8O8Q8PoOb o8oo    \n"
	" dOB69QO8PdUOpugoO9bD  \n"
	"CgggbU8OU qOp qOdoUOdcb\n"
	"   6OuU  /p u gcoUodpP \n"
	"      \\\\//  /douUP   \n"
	"        \\\\////       \n"
	"         |||/\\        \n"
	"         |||\\/        \n"
	"         |||||         \n"
	"  .....\\//||||\\....  \n";

	try {

		if (executor.getGrade() > getGradeToExec())
			throw GradeTooLowException();

		file.open(getTarget() + "_shrubbery", std::ofstream::out);
		file << tree;
	}
	catch (std::exception & e) {
		std::cout << "Shrubbery creation failed because of "
		<< executor.getName() << "'s " << e.what() << std::endl;
	}

}
