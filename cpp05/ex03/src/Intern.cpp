/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:28 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 16:17:10 by cvine            ###   ########.fr       */
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
//                                  Accessors                                 //
// ************************************************************************** //




// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

Form	*Intern::makeForm( std::string name, std::string target ) {

	ShrubberyCreationForm	f(target);
	RobotomyRequestForm		r(target);
	PresidentialPardonForm	p(target);

	int	i = 0;
	const std::string formNames[] = {f.getName(), r.getName(), p.getName()};

	while (i < 3 && formNames[i] != name)
		i++;

	if (i == 3)
		throw NonExistentNameException();

	switch(i) {
		case 0: return (new ShrubberyCreationForm(target));
		case 1:	return (new RobotomyRequestForm(target));
		case 2: return (new PresidentialPardonForm(target));
	}

	return NULL;
}

const char*	Intern::NonExistentNameException::what() const throw() {

	return "Passed name doesn't exist";

};
