/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:01:29 by marvin            #+#    #+#             */
/*   Updated: 2022/05/30 10:01:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{

	std::cout << "ClapTrap default constructor called" << std::endl;

}

ClapTrap::ClapTrap( std::string name )
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "ClapTrap name constructor called" << std::endl;

}

ClapTrap::ClapTrap( ClapTrap const& x ) : _name(x._name),
_hitPoints(x._hitPoints), _energyPoints(x._energyPoints),
_attackDamage(x._attackDamage) {

	std::cout << "ClapTrap copy constructor called" << std::endl;

}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap destructor called" << std::endl;

}

ClapTrap & ClapTrap::operator = ( ClapTrap const& x ) {

	std::cout << "ClapTrap copy assignment operator called" << std::endl;

	if (this != &x) {
		_name = x._name;
		_hitPoints = x._hitPoints;
		_energyPoints = x._energyPoints;
		_attackDamage = x._attackDamage;
	}

	return (*this);

}

std::string	ClapTrap::getName( void ) const {return _name; }
int			ClapTrap::getHP( void ) const {return _hitPoints; }
int			ClapTrap::getEP( void ) const {return _energyPoints; }
int			ClapTrap::getAD( void ) const {return _attackDamage; }

void		ClapTrap::setName( std::string name ) { _name = name; };
void		ClapTrap::setHP( int amount ) { _hitPoints = amount; };
void		ClapTrap::setEP( int amount ) { _energyPoints = amount; };
void		ClapTrap::setAD( int amount ) { _attackDamage = amount; };

void	ClapTrap::attack( const std::string& target ) {

	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!";
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "Not enough energy points";
	else
		std::cout << "Not enough hit points";
	
	std::cout << std::endl;

};
void	ClapTrap::takeDamage( unsigned int amount ) {

	if (_hitPoints > 0) {
		if (_hitPoints - amount < 0)
			_hitPoints = 0;
		else 
			_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << ": -" << amount << "hp";
	} else
		std::cout << "ClapTrap " << _name << " is already dead";
	std::cout << std::endl;

};
void	ClapTrap::beRepaired( unsigned int amount ) {

	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ClapTrap " << _name << " repairs itself: +"
		<< amount << " hp";
		if (_hitPoints + amount > 10)
			_hitPoints = 10;
		else
			_hitPoints += amount;
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "Not enough energy points";
	else
		std::cout << "Not enough hit points";

	std::cout << std::endl;

};
