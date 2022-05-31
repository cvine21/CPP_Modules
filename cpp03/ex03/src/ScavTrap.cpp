/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:01:29 by marvin            #+#    #+#             */
/*   Updated: 2022/05/31 14:56:04 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	std::cout << "ScavTrap default constructor called" << std::endl;

	setHP(100);
	setEP(50);
	setAD(20);

}

ScavTrap::ScavTrap( std::string name ) {

	std::cout << "ScavTrap name constructor called" << std::endl;

	setName(name);
	setHP(100);
	setEP(50);
	setAD(20);

}

ScavTrap::ScavTrap( ScavTrap const& x ) {

	std::cout << "ScavTrap copy constructor called" << std::endl;

	setName(x.getName());
	setHP(x.getHP());
	setEP(x.getEP());
	setAD(x.getAD());

}

ScavTrap & ScavTrap::operator = ( ScavTrap const& x ) {

	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	if (this != &x) {
		setName(x.getName());
		setHP(x.getHP());
		setEP(x.getEP());
		setAD(x.getAD());
	}

	return (*this);

}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap destructor called" << std::endl;

}

void	ScavTrap::attack( const std::string& target ) {

	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!";
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "Not enough energy points";
	else
		std::cout << "Not enough hit points";
	
	std::cout << std::endl;

};

void ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;

}