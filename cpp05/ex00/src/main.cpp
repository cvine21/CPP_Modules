/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 20:29:00 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {

	std::cout << "------TOO LOW GRADE------" << std::endl;
	try {
		Bureaucrat b("Bob", 151);
		std::cout << b << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Initialization error." << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "------TOO HIGH GRADE------" << std::endl;
	try {
		Bureaucrat m("Mike", 0);
		std::cout << m << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Initialization error." << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "------OUT OUF RANGE BY INCREMENT------" << std::endl;
	try {
		Bureaucrat j("John", 1);
		j.incrementGrade();
		std::cout << j << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Incrementation error." << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "------OUT OUF RANGE BY DECREMENT------" << std::endl;
	try {
		Bureaucrat p("Peter", 150);
		p.decrementGrade();
		std::cout << p << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Decrementation error." << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "------CORRECT------" << std::endl;
	try {
		Bureaucrat b("Bill", 55);
		std::cout << b << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Initialization error." << std::endl;
		std::cout << e.what() << std::endl;
	}

	return 0;
}