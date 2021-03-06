/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:45:28 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 21:13:54 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a ( 100 );
	Fixed b ( 15 );

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "a < b: " << (a < b ? "TRUE" : "FALSE") << std::endl;
	std::cout << "a > b: " << (a > b ? "TRUE" : "FALSE") << std::endl;
	std::cout << "a <= b: " << (a <= b ? "TRUE" : "FALSE") << std::endl;
	std::cout << "a >= b: " << (a >= b ? "TRUE" : "FALSE") << std::endl;
	std::cout << "a == b: " << (a == b ? "TRUE" : "FALSE") << std::endl;
	std::cout << "a != b: " << (a != b ? "TRUE" : "FALSE") << std::endl;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;

	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min( a, b ) << std::endl;

	return 0;

}