/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 16:35:02 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int main () {

	Bureaucrat mike("Mike", 1);
	Intern someRandomIntern;

	Form *scf;
	Form *rrf;
	Form *ppf;
	Form *random;

	try {
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << "Intern created " << scf->getName() << std::endl;
		mike.executeForm(*scf);
	}
	catch (std::exception & e) {
		std::cout << "Unable to create form: " << e.what() << std::endl;
	}

	std::cout << std:: endl;
	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "Intern created " << rrf->getName() << std::endl;
		mike.executeForm(*rrf);
	}
	catch (std::exception & e) {
		std::cout << "Unable to create form: " << e.what() << std::endl;
	}

	std::cout << std:: endl;	
	try {
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << "Intern created " << ppf->getName() << std::endl;
		mike.executeForm(*ppf);
	}
	catch (std::exception & e) {
		std::cout << "Unable to create form: " << e.what() << std::endl;
	}

	std::cout << std:: endl;
	try {
		random = someRandomIntern.makeForm("NON-EXISTENT", "Bender");
		std::cout << "Intern created " << random->getName() << std::endl;
		mike.executeForm(*random);
	}
	catch (std::exception & e) {
		std::cout << "Unable to create form: " << e.what() << std::endl;
	}

	// delete scf;
	// delete rrf;
	// delete ppf;
	// delete random;

	return 0;
}