/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 19:05:45 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { 

	std::cout << "Ice default constructor called" << std::endl;

}

Ice::Ice( Ice const &m ) : AMateria(m) {

	std::cout << "Ice copy constructor called" << std::endl;

}

Ice &Ice::operator = ( Ice const & ) {
	
	std::cout << "Ice copy assignment operator called" << std::endl;

	return *this;

}

Ice::~Ice( void ) {

	std::cout << "Ice destructor called" << std::endl;

}

std::string const	&Ice::getType() const { return (_type); }

Ice	*Ice::clone() const { return (new Ice); }

void	Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at "
	<< ((Character &)target).getName() << " *" << std::endl;

}
