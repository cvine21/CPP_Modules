/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:36:15 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 20:29:16 by cvine            ###   ########.fr       */
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

	switch(rand() % 4) {
		case 0: return (new A);
		case 1: return (new B);
		case 2: return (new C);
	}

	return NULL;
	
}

void	identify(Base* p) {
	
	std::cout << "Type: ";

	if (dynamic_cast<A *>(p)) {
		std::cout << "A";
	} else if (dynamic_cast<B *>(p)) {
		std::cout << "B";
	} else if (dynamic_cast<C *>(p)) {
		std::cout << "C";
	} else {
		std::cout << "Error";
	}

	std::cout << std::endl;

}