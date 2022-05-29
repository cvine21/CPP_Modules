/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:45:28 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 13:42:01 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	// Fixed a ( 100 );
	// Fixed b ( 15 );
	// Fixed const a( Fixed( 15.05f ) * Fixed( 12 ) );
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl << std::endl;
	// std::cout << "++a = " << ++a << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "a++ = " << a++ << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "--a = " << ++a << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "a-- = " << a++ << std::endl;
	// std::cout << "a = " << a << std::endl;

	// std::cout << "a < b: " << (a < b ? "TRUE" : "FALSE") << std::endl;
	// std::cout << "a > b: " << (a > b ? "TRUE" : "FALSE") << std::endl;
	// std::cout << "a <= b: " << (a <= b ? "TRUE" : "FALSE") << std::endl;
	// std::cout << "a >= b: " << (a >= b ? "TRUE" : "FALSE") << std::endl;
	// std::cout << "a == b: " << (a == b ? "TRUE" : "FALSE") << std::endl;
	// std::cout << "a != b: " << (a != b ? "TRUE" : "FALSE") << std::endl;

	// std::cout << "a + b = " << a + b << std::endl;
	// std::cout << "a - b = " << (a - b) << std::endl;
	// std::cout << "a * b = " << (a * b) << std::endl;
	// std::cout << "a / b = " << (a / b) << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;
	// std::cout << Fixed::min( a, b ) << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;

}