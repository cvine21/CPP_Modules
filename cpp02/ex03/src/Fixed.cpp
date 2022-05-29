/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:41:56 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 21:15:11 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) { }

Fixed::Fixed( int const n ) { this->value = n << fractionalBits; }

Fixed::Fixed( float const n ) {

	this->value = roundf(n * (float)(1 << fractionalBits));

}

Fixed::Fixed(Fixed const &x) { this->value = x.getRawBits(); }

Fixed::~Fixed() { }

Fixed & Fixed::operator = (Fixed const& x ) {

	if (this != &x)
		this->value = x.value;

	return (*this);

}

int	Fixed::getRawBits( void ) const { return (this->value); }

void	Fixed::setRawBits( int const raw ) { this->value = raw; }

float	Fixed::toFloat( void ) const {

	return ((float)(this->value) / (float)(1 << fractionalBits));

};

int		Fixed::toInt( void ) const { return (this->value >> fractionalBits); };

std::ostream &operator << ( std::ostream &out, Fixed const &f ) {

	out << f.toFloat();

	return (out);

};

bool	Fixed::operator < (const Fixed & rhs) const {

	return (getRawBits() < rhs.getRawBits());

}

bool	Fixed::operator > (const Fixed & rhs) const {

	return (getRawBits() > rhs.getRawBits());

}

bool	Fixed::operator <= (const Fixed & rhs) const {

	return (getRawBits() <= rhs.getRawBits());

}

bool	Fixed::operator >= (const Fixed & rhs) const {

	return (getRawBits() >= rhs.getRawBits());

}

bool	Fixed::operator == (const Fixed & rhs) const {

	return (getRawBits() == rhs.getRawBits());

}

bool	Fixed::operator != (const Fixed & rhs) const {

	return (getRawBits() != rhs.getRawBits());

}

Fixed	Fixed::operator + (const Fixed & rhs) const {

	return (toFloat() + rhs.toFloat());

}

Fixed	Fixed::operator - (const Fixed & rhs) const {

	return (toFloat() - rhs.toFloat());

}

Fixed	Fixed::operator * (const Fixed & rhs) const {

	return (toFloat() * rhs.toFloat());

}

Fixed	Fixed::operator / (const Fixed & rhs) const {

	return (toFloat() / rhs.toFloat());

}

Fixed	Fixed::operator ++ ( void ) {

	this->value++;

	return (*this);

}

Fixed	Fixed::operator -- ( void ) {

	this->value--;

	return (*this);

}

Fixed	Fixed::operator ++ ( int ) {

	Fixed prev = *this;

	operator++();

	return (prev);

}

Fixed	Fixed::operator -- ( int ) {

	Fixed prev = *this;

	operator++();

	return (prev);

}

Fixed const& Fixed::min(Fixed const &a, Fixed const &b) {

	return(a <= b ? a : b);

}

Fixed const& Fixed::max(Fixed const &a, Fixed const &b) {

	return(a >= b ? a : b);

}

 Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a >= b ? a : b); }
 
 Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a <= b ? a : b); }