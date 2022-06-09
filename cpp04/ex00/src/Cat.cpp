/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:30:51 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:01:00 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "Cat default constructor called" << std::endl;

	_type = "Cat";

}

Cat::Cat( Cat const& x ) {

	std::cout << "Cat copy constructor called" << std::endl;

	_type = x.getType();

}

Cat & Cat::operator = ( Cat const& x ) {

	std::cout << "Cat copy assignment operator called" << std::endl;

	if (this != &x)
		_type = x.getType();

	return (*this);

}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;

}

void	Cat::makeSound( void ) const {

	std::cout << "Meow" << std::endl;

}