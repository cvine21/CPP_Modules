/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:28 by cvine             #+#    #+#             */
/*   Updated: 2022/06/12 12:19:41 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

// ************************************************************************** //
//                                  Mandatory                                 //
// ************************************************************************** //

Intern::Intern( void ) {}

Intern::Intern( Intern const & ) {}

Intern & Intern::operator = ( Intern const & ) { return *this; }

Intern::~Intern( void ) {}

// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

static Form	*newShurbberyCreationForm( std::string target ) {

	return (new ShrubberyCreationForm(target));

}

static Form	*newRobotomyRequestForm( std::string target ) {

	return (new RobotomyRequestForm(target));

}

static Form	*newPresidentialPardonForm( std::string target ) {

	return (new PresidentialPardonForm(target));

}

Form	*Intern::makeForm( std::string name, std::string target ) {

	std::string	formNames[3] = {
		"shrubbery creation", "robotomy request", "presidential pardon"};

	Form	*(*form[3])(std::string target) = {newShurbberyCreationForm,
		newRobotomyRequestForm, newPresidentialPardonForm};

	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			std::cout << "Intern created " << formNames[i] << " form";
			std::cout << std::endl;
			return	(*form[i])(target);
		}
	}

	throw NonExistentNameException();

	return NULL;
}

// ************************************************************************** //
//                                Exception classes                           //
// ************************************************************************** //

const char*	Intern::NonExistentNameException::what() const throw() {

	return "Passed name doesn't exist";

};
