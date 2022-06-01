/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:13:15 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 12:41:04 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

	std::cout << "WrongAnimal default constructor called" << std::endl;

}

WrongAnimal::WrongAnimal( WrongAnimal const& x ) : _type(x._type) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;

}

WrongAnimal & WrongAnimal::operator = ( WrongAnimal const& x ) {

	std::cout << "WrongAnimal copy assignment operator called" << std::endl;

	if (this != &x)
		_type = x._type;

	return (*this);

}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal destructor called" << std::endl;

}

std::string	WrongAnimal::getType( void ) const { return _type; }

void	WrongAnimal::makeSound( void ) const {

	std::cout << "<meta sound>" << std::endl;

}