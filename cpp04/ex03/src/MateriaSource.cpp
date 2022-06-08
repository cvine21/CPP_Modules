/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:18:25 by cvine             #+#    #+#             */
/*   Updated: 2022/06/08 20:56:10 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	std::cout << "MateriaSource default constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;

}

MateriaSource::MateriaSource( MateriaSource const &c ) {

	std::cout << "MateriaSource copy constructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		if (c._inventory[i] != 0)
			_inventory[i] = c._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}

}

MateriaSource::~MateriaSource() {
	
	std::cout << "MateriaSource destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		if (_inventory[i] != 0)
			delete _inventory[i];

}

MateriaSource &MateriaSource::operator = ( MateriaSource const &c ) {

	std::cout << "MateriaSource copy assignment operator called" << std::endl;

	if (this != &c) {
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

void	MateriaSource::learnMateria( AMateria *m ) {

	int i = 0;

	while (_inventory[i] != 0)
		i++;

	if (i < 4) {
		_inventory[i] = m;
		std::cout << "Learning " << m->getType() << "...";
	} else
		std::cout << "The inventory is full";

	std::cout << std::endl;
}

AMateria *MateriaSource::createMateria( std::string const &type ) {

	for (int i = 0; i < 4; i++) {
		if (_inventory[i] != 0 && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}

	return (0);
}