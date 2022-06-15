/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:36:15 by cvine             #+#    #+#             */
/*   Updated: 2022/06/15 15:15:11 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>

Base	*generate( void ) {

	switch(rand() % 3) {
		case 0: return (new A);
		case 1: return (new B);
		case 2: return (new C);
	}

	return NULL;

}

void	identify(Base	*p) {

	if (p == NULL) {
		std::cout << "unknown" << std::endl;
		return ;
	}

	if (dynamic_cast<A *>(p)) {
		std::cout << "A";
	} else if (dynamic_cast<B *>(p)) {
		std::cout << "B";
	} else if (dynamic_cast<C *>(p)) {
		std::cout << "C";
	}
	std::cout << std::endl;

}

void	identify(Base &p) {

	try {
		std::cout << "Casting to A: ";
		Base &tmp = dynamic_cast<A &>(p);
		(void)tmp;
		std::cout << "success" << std::endl;
		std::cout << "Type: A"  << std::endl;
		return ;
	} catch (std::bad_cast & bc) {
		std::cerr << "bad_cast to A" << std::endl;
	}

	try {
		std::cout << "Casting to B: ";
		Base &tmp = dynamic_cast<B &>(p);
		(void)tmp;
		std::cout << "success" << std::endl;
		std::cout << "Type: B"  << std::endl;
		return ;
	} catch (std::bad_cast & bc) {
		std::cerr << "bad_cast" << std::endl;
	}

	try {
		std::cout << "Casting to C: ";
		Base &tmp = dynamic_cast<C &>(p);
		(void)tmp;
		std::cout << "success" << std::endl;
		std::cout << "Type: C" << std::endl;
		return ;
	} catch (std::bad_cast & bc) {
		std::cerr << "bad_cast" << std::endl;
	}

}