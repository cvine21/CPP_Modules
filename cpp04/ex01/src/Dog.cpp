/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:30:51 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 17:12:34 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	std::cout << "Dog default constructor called" << std::endl;

	_type = "Dog";
	_brain = new Brain();

}

Dog::Dog( Dog const& x ) {

	std::cout << "Dog copy constructor called" << std::endl;

	_type = x.getType();
	_brain = new Brain();
	*_brain = *(x._brain);

}

Dog & Dog::operator = ( Dog const& x ) {

	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &x) {
		_type = x.getType();
		delete _brain;
		_brain = new Brain();
		*_brain = *(x._brain);
	}

	return (*this);

}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
	delete _brain;

}

Brain	*Dog::getBrain( void ) const { return _brain; }

void	Dog::makeSound( void ) const {

	std::cout << "Bark" << std::endl;

}