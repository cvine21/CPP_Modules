/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 22:28:05 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) { 

	std::cout << "AMateria default constructor called" << std::endl;
 
}

AMateria::AMateria( std::string const &type ) : _type(type) {

	std::cout << "AMateria type constructor called" << std::endl;

}

AMateria::AMateria( AMateria const &m ) : _type(m._type) {

	std::cout << "AMateria copy constructor called" << std::endl;

}

AMateria &AMateria::operator = ( AMateria const & ) {

	std::cout << "AMateria copy assignment operator called" << std::endl;

	return (*this);

}

AMateria::~AMateria( void ) {

	std::cout << "AMateria destructor called" << std::endl;

}

std::string const &AMateria::getType() const { return (_type); }

void	AMateria::use(ICharacter &target) {

	std::cout << "AMateria used by " << target.getName() << std::endl;

}