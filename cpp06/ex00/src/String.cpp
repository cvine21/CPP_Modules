/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:37:39 by cvine             #+#    #+#             */
/*   Updated: 2022/06/13 19:14:46 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "String.hpp"
#include <string>
#include <iomanip>

// ************************************************************************** //
//                                  Mandatory                                 //
// ************************************************************************** //

String::String( void ) {}

String::String( std::string str ) : _str(str) {};

String::String( String const & s ) : _str(s._str) {}

String & String::operator = ( String const & s ) {

	if (this != &s)
		_str = s._str;
	
	return *this;

}

String::~String( void ) {}

// ************************************************************************** //
//                                  Accessors                                 //
// ************************************************************************** //

std::string String::getStr( void ) { return _str; }

// ************************************************************************** //
//                                Other functions                             //
// ************************************************************************** //

String::operator int () {

	int	casted = 0;

	std::cout << "int: ";

	try {
		casted = stoi(getStr());
		std::cout << casted << std::endl;
	}
	catch(std::invalid_argument const& ex) {
		std::cout << "impossible" << std::endl;
	}
	catch(std::out_of_range const& ex) {
		std::cout << "impossible" << std::endl;
	}

	return casted;
}

String::operator float () {

	float	casted = 0;

	std::cout << "float: ";

	try {
		casted = stof(getStr());
		std::cout << std::fixed << std::setprecision(1);
		std::cout << casted << "f" << std::endl;
	}
	catch(std::invalid_argument const& ex) {
		std::cout << "impossible" << std::endl;
	}
	catch(std::out_of_range const& ex) {
		std::cout << "impossible" << std::endl;
	}

	return casted;
}

String::operator double () {

	double	casted = 0;

	std::cout << "float: ";

	try {
		casted = stod(getStr());
		std::cout << std::fixed << std::setprecision(1);
		std::cout << casted << std::endl;
	}
	catch(std::invalid_argument const& ex) {
		std::cout << "impossible" << std::endl;
	}
	catch(std::out_of_range const& ex) {
		std::cout << "impossible" << std::endl;
	}

	return casted;
}

// ************************************************************************** //
//                                Exception classes                           //
// ************************************************************************** //

const char *String::NonDisplayableException::what() const throw() {

	return "Non displayable";

}