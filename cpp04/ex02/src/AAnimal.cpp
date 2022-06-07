/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:25:39 by cvine             #+#    #+#             */
/*   Updated: 2022/06/06 17:57:56 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {

	std::cout << "AAnimal default constructor called" << std::endl;

}

AAnimal::AAnimal( AAnimal const& x ) : _type(x.getType()) {

	std::cout << "AAnimal copy constructor called" << std::endl;

}

AAnimal & AAnimal::operator = ( AAnimal const& x ) {

	std::cout << "AAnimal copy assignment operator called" << std::endl;

	if (this != &x)
		_type = x.getType();

	return (*this);

}

AAnimal::~AAnimal( void ) {

	std::cout << "AAnimal destructor called" << std::endl;

}

std::string	AAnimal::getType( void ) const { return _type; }
