/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/12 12:31:31 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

static void	test( Bureaucrat & b, const Form & f, std::string testName ) {

	std::cout << testName << std::endl;
	b.executeForm(f);
	std::cout << std::endl;

}

int main () {

	Bureaucrat mike("Mike", 1);
	Bureaucrat bob("Bob", 138);
	ShrubberyCreationForm scf("garden");
	RobotomyRequestForm rrf("Cat");
	PresidentialPardonForm ppf("Someone");

	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << "///////// EXECUTION FAILED /////////" << std::endl;
	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << std::endl;

	test(bob, scf, "SHRUBBERY CREATION:");
	test(bob, rrf, "ROBOTOMY:");
	test(bob, ppf, "PRESIDENTIAL PARDON:");

	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << "////// SUCCESSFULLY EXECUTION //////" << std::endl;
	std::cout << "////////////////////////////////////" << std::endl;
	std::cout << std::endl;

	test(mike, scf, "SHRUBBERY CREATION:");
	test(mike, rrf, "ROBOTOMY:");
	test(mike, ppf, "PRESIDENTIAL PARDON:");

	return 0;
}