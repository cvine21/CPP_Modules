/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:15:52 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 10:53:53 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

	std::cout << "DiamondTrap default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_trap"), _name(name) {

	std::cout << "DiamondTrap name constructor called" << std::endl;

}

DiamondTrap::DiamondTrap( DiamondTrap const& x )
: ClapTrap(x._name + "_clap_trap"), _name(x._name) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;

}

DiamondTrap & DiamondTrap::operator = ( DiamondTrap const& x ) {

	std::cout << "DiamondTrap copy assignment operator called" << std::endl;

	if (this != &x)
		_name = x._name;

	return (*this);

}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap destructor called" << std::endl;

}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "ClapTrap's name: " << getName() << std::endl;
	std::cout << "ScavTrap's name: " << _name << std::endl;

}