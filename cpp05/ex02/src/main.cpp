/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/11 13:57:57 by cvine            ###   ########.fr       */
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
	bob.executeForm(f);
	std::cout << std::endl;

	/* ROBOTOMY */
	std::cout << "ROBOTOMY:" << std::endl;
	bob.executeForm(r);
	std::cout << std::endl;

	/* PRESIDENTIAL PARDON */
	std::cout << "PRESIDENTIAL PARDON:" << std::endl;
	bob.executeForm(p);
	std::cout << std::endl;

	/* SUCCESSFULLY EXECUTION */
	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << "////// SUCCESSFULLY EXECUTION //////" << std::endl;
	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << std::endl;

	/* SHRUBBERY CREATION */
	std::cout << "SHRUBBERY CREATION:" << std::endl;
	mike.executeForm(f);
	std::cout << std::endl;

	/* ROBOTOMY */
	std::cout << "ROBOTOMY:" << std::endl;
	mike.executeForm(r);
	std::cout << std::endl;

	/* PRESIDENTIAL PARDON */
	std::cout << "PRESIDENTIAL PARDON:" << std::endl;
	mike.executeForm(p);

	return 0;
}