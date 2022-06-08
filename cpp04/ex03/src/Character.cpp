/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/08 20:54:59 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

Character::Character() {

	std::cout << "Creating character..." << std::endl;

	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;

}

Character::Character( std::string name ) : _name(name) {

	std::cout << "Creating character " << name << "..." << std::endl;

	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;

}

Character::Character( Character const &c ) : _name(c._name) {

	std::cout << "Copying character..." << std::endl;

	for (int i = 0; i < 4; i++) {
		if (c._inventory[i] != 0)
			_inventory[i] = c._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}

}

Character::~Character() {
	
	std::cout << "Destroying character " << getName() << "..." << std::endl;

	for (int i = 0; i < 4; i++)
		if (_inventory[i] != 0)
			delete _inventory[i];

}

Character &Character::operator = ( Character const &c ) {

	std::cout << "Assigning character..." << std::endl;

	if (this != &c) {
		_name = c.getName();
		for (int i = 0; i < 4; i++) {
			if (c._inventory[i] != 0) {
				delete _inventory[i];
				_inventory[i] = c._inventory[i]->clone();
			} else
				_inventory[i] = 0;
		}
	}

	return *this;

}

std::string const &Character::getName() const { return (_name); }

void Character::equip( AMateria *m ) {

	int i = 0;

	if (m == 0)
		return ;

	while (_inventory[i] != 0)
		i++;

	if (i < 4) {
		_inventory[i] = m;
		std::cout << getName() << " equipped with " << m->getType();
	} else
		std::cout << "The inventory is full";

	std::cout << std::endl;

}

void Character::unequip( int idx ) {

	if (0 <= idx  && idx <= 3 && _inventory[idx] != 0) {
		std::cout << getName() << " dropped " << _inventory[idx]->getType();
		_inventory[idx] = 0;
	} else
		std::cout << "There is no slot with index " << idx;

	std::cout << std::endl;

}

void Character::use( int idx, ICharacter &target ) {

	if (0 <= idx  && idx <= 3 && _inventory[idx] != 0)
		_inventory[idx]->use(target);
	else if (0 > idx || idx > 3)
		std::cout << "There is no slot with index " << idx << std::endl;
	else if (_inventory[idx] != 0)
		std::cout << "The slot is empty" << std::endl;
}

AMateria	*Character::getMateria( int idx ) const { return (_inventory[idx]); }