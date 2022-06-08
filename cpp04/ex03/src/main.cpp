/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:15:00 by cvine             #+#    #+#             */
/*   Updated: 2022/06/08 21:32:41 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void test()
{

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	std::cout << "CREATE MATERIA:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	
	AMateria	*tmp;
	AMateria	*tmp1;
	AMateria	*tmp2;
	AMateria	*tmp3;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire"); // null
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << "USE ON A NEW CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob); // Use an empty / non existing slot in inventory
	std::cout << std::endl;

	std::cout << "DEEP COPY CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	Character	*charles = new Character("Charles");
	tmp1 = src->createMateria("cure");
	charles->equip(tmp1);
	tmp2 = src->createMateria("ice");
	charles->equip(tmp2);

	Character	*charles_copy = new Character(*charles);
	charles->unequip(0);
	/* compare src and copy */
	charles->use(0, *bob);
	charles_copy->use(0, *bob);
	std::cout << std::endl;

	std::cout << "UNEQUIP:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	me->unequip(-1); // unequip an empty / non existing slot in inventory
	me->unequip(18);
	me->unequip(3);
	me->use(1, *charles);
	tmp3 = charles_copy->getMateria(1);
	charles_copy->unequip(1); //this will produce a leak if we don't store the address somewhere else before
	delete tmp3;
	std::cout << std::endl;

	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	delete charles;
	delete charles_copy;
	delete tmp1;
	std::cout << std::endl;

}

int main() {

	test();

	return (0);

}