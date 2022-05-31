/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:15:52 by cvine             #+#    #+#             */
/*   Updated: 2022/05/31 18:36:45 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

	std::cout << "DiamondTrap default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_trap") {

	std::cout << "DiamondTrap name constructor called" << std::endl;

	_name = name;

}

DiamondTrap::DiamondTrap( DiamondTrap const& x ) : ClapTrap(x._name + "_clap_trap") {

	std::cout << "DiamondTrap copy constructor called" << std::endl;

	_name = x._name;

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