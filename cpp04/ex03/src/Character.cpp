/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 22:17:07 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {

	std::cout << "Character default constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;

}

Character::Character( std::string name ) : _name(name) {

	std::cout << "Character name constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;

}

Character::Character( Character const &c ) : _name(c._name) {

	std::cout << "Character copy constructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		if (c._inventory[i] != NULL)
			_inventory[i] = c._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}

}

Character::~Character() {
	
	std::cout << "Character destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];

}

Character &Character::operator = ( Character const &c ) {

	std::cout << "Character copy assignment operator called" << std::endl;

	if (this != &c) {
		_name = c.getName();
		for (int i = 0; i < 4; i++) {
			if (c._inventory[i] != NULL) {
				delete _inventory[i];
				_inventory[i] = c._inventory[i]->clone();
			} else
				_inventory[i] = NULL;
		}
	}

	return *this;

}

std::string const &Character::getName() const { return (_name); }

void Character::equip( AMateria *m ) {

	int i = 0;

	while (_inventory[i] != NULL)
		i++;

	if (i < 4) {
		_inventory[i] = m;
		std::cout << getName() << " equipped with " << m->getType();
	} else
		std::cout << "The inventory is full";

	std::cout << std::endl;

}

void Character::unequip( int idx ) {


	if (0 <= idx  && idx <= 3) {
		// AMateria *tmp = _inventory[idx];
		_inventory[idx] = NULL;
		std::cout << getName() << " dropped " << _inventory[idx]->getType();
	} else
		std::cout << "There is no slot with index " << idx;

	std::cout << std::endl;

}

void Character::use( int idx, ICharacter &target ) {

	if (0 <= idx  && idx <= 3 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
	else if (0 > idx || idx > 3)
		std::cout << "There is no slot with index " << idx;
	else if (_inventory[idx] != NULL)
		std::cout << "The slot is empty";

	std::cout << std::endl;
}
