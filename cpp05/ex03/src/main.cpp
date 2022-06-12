/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/12 12:21:08 by cvine            ###   ########.fr       */
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

static void	test(std::string name, std::string target) {

	Bureaucrat	mike("Mike", 1);
	Intern		someRandomIntern;
	Form		*someRandomForm;

	std::cout << "-----------------------------------------------" << std::endl;
	try {
		someRandomForm = someRandomIntern.makeForm(name, target);
		mike.executeForm(*someRandomForm);
		delete someRandomForm;
	}
	catch (std::exception & e) {
		std::cout << "Unable to create form: " << e.what() << std::endl;
	}

}

int main () {

	test("shrubbery creation", "Bender");
	test("robotomy request", "Bender");
	test("presidential pardon", "Bender");
	test("NON-EXISTENT", "Bender");

	return 0;
}