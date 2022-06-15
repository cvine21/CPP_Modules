/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:40:52 by cvine             #+#    #+#             */
/*   Updated: 2022/06/15 15:16:02 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>

int main () {

	srand(time(NULL));

	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();
	Base *rand4 = NULL;

	Base &ref1 = *rand1;
	Base &ref2 = *rand2;
	Base &ref3 = *rand3;

	std::cout << "----------POINTER TYPECAST----------" << std::endl;

	std::cout << "rand1 type: ";
	identify(rand1);
	std::cout << "rand2 type: ";
	identify(rand2);
	std::cout << "rand3 type: ";
	identify(rand3);
	std::cout << "rand4 type: ";
	identify(rand4);

	std::cout << std::endl;
	std::cout << "----------REFERENCE TYPECAST----------" << std::endl;

	std::cout << "Identifying ref1..." << std::endl;
	identify(ref1);
	std::cout << std::endl << "Identifying ref2..." << std::endl;
	identify(ref2);
	std::cout << std::endl << "Identifying ref3..." << std::endl;
	identify(ref3);

	delete rand1;
	delete rand2;
	delete rand3;

	return 0;
}