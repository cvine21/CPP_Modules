/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:37:39 by cvine             #+#    #+#             */
/*   Updated: 2022/06/17 11:30:57 by cvine            ###   ########.fr       */
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

static char	toChar( std::string str ) {

	int		i;
	char	c;

	i = stoi(str);
	c = static_cast<char>(i);

	if (i < CHAR_MIN || i > CHAR_MAX) {
		throw "out of range";
	} else if (isprint(c) == 0)
		throw "Non displayable";

	return c;

}

String::operator char () {

	char	c;

	std::cout << "char: ";
	try {
		c = toChar(getStr());
		std::cout << "'" << c << "'" << std::endl;
	} catch(std::invalid_argument const& ex) {
		std::cout << "impossible" << std::endl;
	} catch(const char *str) {
		std::cout << str << std::endl;
	}

	return c;

}

String::operator int () {

	int	i;

	std::cout << "int: ";
	try {
		i = stoi(getStr());
		std::cout << i << std::endl;
	} catch(std::invalid_argument const& ex) {
		std::cout << "impossible" << std::endl;
	} catch(std::out_of_range const& ex) {
		std::cout << "out of range" << std::endl;
	}

	return i;

}

String::operator float () {

	float	f;

	std::cout << "float: ";
	try {
		f = stof(getStr());
		std::cout << std::fixed << std::setprecision(1);
		std::cout << f << "f" << std::endl;
	} catch(std::invalid_argument const& ex) {
		std::cout << "impossible" << std::endl;
	} catch(std::out_of_range const& ex) {
		std::cout << "out of range" << std::endl;
	}

	return f;

}

String::operator double () {

	double	d;

	std::cout << "double: ";
	try {
		d = stod(getStr());
		std::cout << std::fixed << std::setprecision(1);
		std::cout << d << std::endl;
	} catch(std::invalid_argument const& ex) {
		std::cout << "impossible" << std::endl;
	} catch(std::out_of_range const& ex) {
		std::cout << "out of range" << std::endl;
	}

	return d;

}
