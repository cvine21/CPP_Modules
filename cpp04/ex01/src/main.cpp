/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:36:55 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 17:31:27 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *Animals[10];


	for (int i = 0; i < 5; ++i)
		Animals[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		Animals[i] = new Cat();

	std::cout << "DEEP COPY!!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	Dog copy(*(Dog *)Animals[4]);
	for (int i = 0; i < 100; ++i)
	{
		std::cout << copy.getBrain()->getIdea(i) << "    ";
		std::cout << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;

	for (int i = 0; i < 10; ++i)
		delete Animals[i];
}