/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:01:29 by marvin            #+#    #+#             */
/*   Updated: 2022/05/31 15:31:51 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

	std::cout << "FragTrap default constructor called" << std::endl;

	setHP(100);
	setEP(100);
	setAD(30);

}

FragTrap::FragTrap( std::string name ) {

	std::cout << "FragTrap name constructor called" << std::endl;

	setName(name);
	setHP(100);
	setEP(100);
	setAD(30);

}

FragTrap::FragTrap( FragTrap const& x ) {

	std::cout << "FragTrap copy constructor called" << std::endl;

	setName(x.getName());
	setHP(x.getHP());
	setEP(x.getEP());
	setAD(x.getAD());

}

FragTrap & FragTrap::operator = ( FragTrap const& x ) {

	std::cout << "FragTrap copy assignment operator called" << std::endl;

	if (this != &x) {
		setName(x.getName());
		setHP(x.getHP());
		setEP(x.getEP());
		setAD(x.getAD());
	}

	return (*this);

}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap destructor called" << std::endl;

}

void	FragTrap::attack( const std::string& target ) {

	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "FragTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!";
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "Not enough energy points";
	else
		std::cout << "Not enough hit points";
	
	std::cout << std::endl;

};

void FragTrap::highFivesGuys( void ) {

	std::cout << "High fives!" << std::endl;

}