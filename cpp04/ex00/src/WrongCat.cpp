/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:18:50 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 12:18:52 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	std::cout << "WrongCat default constructor called" << std::endl;

	_type = "WrongCat";

}

WrongCat::WrongCat( WrongCat const& x ) {

	std::cout << "WrongCat copy constructor called" << std::endl;

	_type = x._type;

}

WrongCat & WrongCat::operator = ( WrongCat const& x ) {

	std::cout << "WrongCat copy assignment operator called" << std::endl;

	if (this != &x)
		_type = x._type;

	return (*this);

}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat destructor called" << std::endl;

}

void	WrongCat::makeSound( void ) const {

	std::cout << "Meow" << std::endl;

}