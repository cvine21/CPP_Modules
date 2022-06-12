/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:14:04 by cvine             #+#    #+#             */
/*   Updated: 2022/06/12 12:41:30 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

static void testConstructor(
	const std::string name, const int signGrade, const int execGrade ) {

	try {
		Form	c(name, signGrade, execGrade);
	}
	catch (std::exception & e) {
		std::cout << "Constructor failure: " << e.what() << std::endl;
	}

}

static void	testSign( Bureaucrat & b, Form & f ) {

	std::cout << b << std::endl;
	b.signForm(f);
	std::cout << f << std::endl << std::endl;

}

int main () {

	std::cout << "---------CONSTRUCTORS---------" << std::endl;
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	bill("Bill", 132);

	Form		a("A13", 4, 6);
	Form		b("B97", 146, 135);

	testConstructor("C46", 489, 1435);
	testConstructor("D143", -583, -800);

	std::cout << "---------SIGN OK---------" << std::endl;
	testSign(bob, a);
	testSign(bob, b);
	testSign(bill, b);

	std::cout << "---------SIGN KO---------" << std::endl;
	testSign(bill, a);

	return 0;
}