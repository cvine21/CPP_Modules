/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:30:51 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 17:12:32 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "Cat default constructor called" << std::endl;

	_type = "Cat";
	_brain = new Brain();

}

Cat::Cat( Cat const& x ) {

	std::cout << "Cat copy constructor called" << std::endl;

	_type = x.getType();
	_brain = new Brain();
	*_brain = *(x._brain);

}

Cat & Cat::operator = ( Cat const& x ) {

	std::cout << "Cat copy assignment operator called" << std::endl;

	if (this != &x) {
		_type = x.getType();
		delete _brain;
		_brain = new Brain();
		*_brain = *(x._brain);
	}

	return (*this);

}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;
	delete _brain;

}

Brain	*Cat::getBrain( void ) const { return _brain; }

void	Cat::makeSound( void ) const {

	std::cout << "Meow" << std::endl;

}