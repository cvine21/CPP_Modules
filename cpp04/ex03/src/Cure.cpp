/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 19:06:05 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") { 

	std::cout << "Cure default constructor called" << std::endl;

}

Cure::Cure( Cure const &m ) : AMateria(m) {

	std::cout << "Cure copy constructor called" << std::endl;

}

Cure &Cure::operator = ( Cure const & ) {
	
	std::cout << "Cure copy assignment operator called" << std::endl;

	return *this;

}

Cure::~Cure( void ) {

	std::cout << "Cure destructor called" << std::endl;

}

std::string const	&Cure::getType() const { return (_type); }

Cure	*Cure::clone() const { return (new Cure); }

void	Cure::use(ICharacter &target) {

	std::cout << "* heals " << ((Character &)target).getName()
	<< "’s wounds *"<< std::endl;

}
