/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/08 20:50:53 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { 

	std::cout << "Creating " << getType() << "..." << std::endl;

}

Ice::Ice( Ice const &m ) : AMateria(m) {

	std::cout << "Copying " << getType() << "..." << std::endl;

}

Ice &Ice::operator = ( Ice const & ) {
	
	std::cout << "Assigning " << getType() << "..." << std::endl;

	return *this;

}

Ice::~Ice( void ) {

	std::cout << "Destroying " << getType() << "..." << std::endl;

}

std::string const	&Ice::getType() const { return (_type); }

Ice	*Ice::clone() const { return (new Ice); }

void	Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at "
	<< ((Character &)target).getName() << " *" << std::endl;

}
