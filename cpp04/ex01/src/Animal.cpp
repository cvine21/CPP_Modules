/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:25:39 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 13:24:58 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << "Animal default constructor called" << std::endl;

}

Animal::Animal( Animal const& x ) : _type(x.getType()) {

	std::cout << "Animal copy constructor called" << std::endl;

}

Animal & Animal::operator = ( Animal const& x ) {

	std::cout << "Animal copy assignment operator called" << std::endl;

	if (this != &x)
		_type = x.getType();

	return (*this);

}

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;

}

std::string	Animal::getType( void ) const { return _type; }

void	Animal::makeSound( void ) const {

	std::cout << "<meta sound>" << std::endl;

}