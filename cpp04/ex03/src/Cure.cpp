/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/08 20:51:05 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

	std::cout << "Creating " << getType() << "..." << std::endl;

}

Cure::Cure( Cure const &m ) : AMateria(m) {

	std::cout << "Copying " << getType() << "..." << std::endl;

}

Cure &Cure::operator = ( Cure const & ) {
	
	std::cout << "Assigning " << getType() << "..." << std::endl;

	return *this;

}

Cure::~Cure( void ) {

	std::cout << "Destroying " << getType() << "..." << std::endl;

}

std::string const	&Cure::getType() const { return (_type); }

Cure	*Cure::clone() const { return (new Cure); }

void	Cure::use(ICharacter &target) {

	std::cout << "* heals " << ((Character &)target).getName()
	<< "’s wounds *"<< std::endl;

}
