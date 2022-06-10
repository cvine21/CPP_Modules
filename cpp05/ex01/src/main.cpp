/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/10 14:45:42 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int main () {

	std::cout << "---------CONSTRUCTING---------" << std::endl;
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	bill("Bill", 132);

	Form		a("A13", 4, 6);
	Form		b("B97", 146, 135);

	// Create a Form with grades too low
	try {
		Form	c("C46", 489, 1435);
	}
	catch (std::exception & e) {
		std::cout << "Constructor failure: " << e.what() << std::endl;
	}

	// Create a grade with grades too high
	try {
		Form	c("D143", -583, -800);
	}
	catch (std::exception & e) {
		std::cout << "Constructor failure: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Sign OK
	std::cout << "---------SIGN OK---------" << std::endl;
	std::cout << bob << std::endl;
	bob.signForm(a);
	std::cout << a << std::endl << std::endl;

	// Sign OK
	std::cout << "---------SIGN OK---------" << std::endl;
	std::cout << bob << std::endl;
	bob.signForm(b);
	std::cout << b << std::endl << std::endl;

	// Sign KO
	std::cout << "---------SIGN KO---------" << std::endl;
	std::cout << bill << std::endl;
	bill.signForm(a);
	std::cout << a << std::endl << std::endl;
	
	// Sign OK
	std::cout << "---------SIGN OK---------" << std::endl;
	std::cout << bill << std::endl;
	bill.signForm(b);
	std::cout << b << std::endl;

	return 0;
}