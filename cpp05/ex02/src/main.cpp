/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 17:50:14 by cvine            ###   ########.fr       */
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

	std::cout << "---------EXECUTION FAILED---------" << std::endl;
	std::cout << "SHRUBBERY CREATION: (LOOK IF THE FILE WAS CREATEED)" << std::endl;
	f.execute(bob);
	std::cout << std::endl;
	std::cout << "ROBOTOMY:" << std::endl;
	r.execute(bob);
	std::cout << std::endl;
	std::cout << "PRESIDENTIAL PARDON:" << std::endl;
	p.execute(bob);
	std::cout << std::endl;

	std::cout << "---------SUCCESSFULLY EXECUTION---------" << std::endl;
	std::cout << "SHRUBBERY CREATION: (LOOK IF THE FILE WAS CREATEED)" << std::endl;
	f.execute(mike);
	std::cout << std::endl;
	std::cout << "ROBOTOMY:" << std::endl;
	r.execute(mike);
	std::cout << std::endl;
	std::cout << "PRESIDENTIAL PARDON:" << std::endl;
	p.execute(mike);

	return 0;
}