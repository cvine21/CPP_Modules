/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:30:51 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:00:56 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	std::cout << "Dog default constructor called" << std::endl;

	_type = "Dog";

}

Dog::Dog( Dog const& x ) {

	std::cout << "Dog copy constructor called" << std::endl;

	_type = x.getType();

}

Dog & Dog::operator = ( Dog const& x ) {

	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &x)
		_type = x.getType();

	return (*this);

}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;

}

void	Dog::makeSound( void ) const {

	std::cout << "Bark" << std::endl;

}