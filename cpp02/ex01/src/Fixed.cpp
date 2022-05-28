/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:41:56 by cvine             #+#    #+#             */
/*   Updated: 2022/05/28 20:17:27 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {

	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed( int const n ) {

	std::cout << "Int constructor called" << std::endl;

	this->value = n << fractionalBits;

}

Fixed::Fixed( float const n ) {

	std::cout << "Float constructor called" << std::endl;

	this->value = roundf(n * (float)(1 << fractionalBits));

}

Fixed::Fixed(Fixed const &x) {

	std::cout << "Copy constructor called" << std::endl;

	*this = x;

}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed & Fixed::operator = (Fixed const& x ) {

	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &x)
		this->value = x.value;

	return (*this);

}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return (this->value);

}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;

	this->value = raw;

}

float	Fixed::toFloat( void ) const {

	return ((float)(this->value) / (float)(1 << fractionalBits));

};

int		Fixed::toInt( void ) const {

	return (this->value >> fractionalBits);

};

std::ostream &operator << ( std::ostream &out, Fixed const &f ) {

	out << f.toFloat();

	return (out);

};