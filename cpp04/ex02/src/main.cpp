/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:36:55 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:25:16 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {

	AAnimal *Animals[10];

	for (int i = 0; i < 5; ++i)
		Animals[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		Animals[i] = new Cat();

	std::cout << "-----------------------------" << std::endl;
	Dog copy(*(Dog *)Animals[4]);
	for (int i = 0; i < 100; ++i)
	{
		std::cout << "source: " << copy.getBrain()->getIdea(i) << "    ";
		std::cout << "copy: " << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;

	for (int i = 0; i < 10; ++i)
		delete Animals[i];

}