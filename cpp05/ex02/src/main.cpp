/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 12:22:09 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int main () {

	Bureaucrat mike("Mike", 1);
	Bureaucrat bob("Bob", 138);
	ShrubberyCreationForm f("garden");
	RobotomyRequestForm r("Cat");
	PresidentialPardonForm p("Someone");
	
	/* EXECUTION FAILED */
	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << "///////// EXECUTION FAILED /////////" << std::endl;
	std::cout << "////////////////////////////////////" << std::endl << std::endl;

	/* SHRUBBERY CREATION */
	std::cout << "SHRUBBERY CREATION:" << std::endl;
	try {
		f.execute(bob);
	}
	catch (std::exception & e) {
		std::cout << "ShrubberyCreationForm execution failed because of ";
		std::cout << bob.getName() << "'s " << e.what() << std::endl;
	}
	std::cout << std::endl;

	/* ROBOTOMY */
	std::cout << "ROBOTOMY:" << std::endl;
	try {
		r.execute(bob);
	}
	catch (std::exception & e) {
		std::cout << "RobotomyRequestForm execution failed because of ";
		std::cout << bob.getName() << "'s " << e.what() << std::endl;
	}
	std::cout << std::endl;

	/* PRESIDENTIAL PARDON */
	std::cout << "PRESIDENTIAL PARDON:" << std::endl;
	try {
		p.execute(bob);
	}
	catch (std::exception & e) {
		std::cout << "PresidentialPardonForm execution failed because of ";
		std::cout << bob.getName() << "'s " << e.what() << std::endl;
	}
	std::cout << std::endl;

	/* SUCCESSFULLY EXECUTION */
	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << "////// SUCCESSFULLY EXECUTION //////" << std::endl;
	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << std::endl;

	/* SHRUBBERY CREATION */
	std::cout << "SHRUBBERY CREATION:" << std::endl;
	try {
		f.execute(mike);
	}
	catch (std::exception & e) {
		std::cout << "ShrubberyCreationForm execution failed because of ";
		std::cout << mike.getName() << "'s " << e.what() << std::endl;
	}
	std::cout << std::endl;

	/* ROBOTOMY */
	std::cout << "ROBOTOMY:" << std::endl;
	try {
		r.execute(mike);
	}
	catch (std::exception & e) {
		std::cout << "RobotomyRequestForm execution failed because of ";
		std::cout << mike.getName() << "'s " << e.what() << std::endl;
	}
	std::cout << std::endl;

	/* PRESIDENTIAL PARDON */
	std::cout << "PRESIDENTIAL PARDON:" << std::endl;
	try {
		p.execute(mike);
	}
	catch (std::exception & e) {
		std::cout << "PresidentialPardonForm execution failed because of ";
		std::cout << mike.getName() << "'s " << e.what() << std::endl;
	}

	return 0;
}