/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:41:56 by cvine             #+#    #+#             */
/*   Updated: 2022/05/28 15:47:59 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : value(0) {

	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(Fixed const &x) {

	std::cout << "Copy constructor called" << std::endl;

	*this = x;

}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;

}

Fixed & Fixed::operator = (Fixed const& x ) {

	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &x)
		this->value = x.getRawBits();

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
