/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:36:55 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:04:12 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << "Cat: ";
	cat->makeSound();
	std::cout << "Dog: ";
	dog->makeSound();
	std::cout << "Meta animal: ";
	meta->makeSound();
	std::cout << "WrongCat: ";
	wrongCat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrongCat;

	return 0;
}