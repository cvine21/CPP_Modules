/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:08:48 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 12:06:32 by cvine            ###   ########.fr       */
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

	if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();

	file.open(getTarget() + "_shrubbery", std::ofstream::out);
	if (file){
		std::cout << "Shrubbery was successfully created." << std::endl;
		file << TREE;
	} else
		std::cout << "Couldn't open the file." << std::endl;

}
