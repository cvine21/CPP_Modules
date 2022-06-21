/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:07:06 by cvine             #+#    #+#             */
/*   Updated: 2022/06/21 17:23:08 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main() {

	MutantStack<int>	mstack;
	std::vector<int>	vect;

	mstack.push(5);
	mstack.push(17);

	vect.push_back(5);
	vect.push_back(17);

	/* Compare top elements */
	std::cout << "Stack's top: " << mstack.top() << std::endl;
	std::cout << "Vector's top: " << vect.back() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	mstack.pop();

	vect.pop_back();

	/* Compare sizes */
	std::cout << "Stack's size: " << mstack.size() << std::endl;
	std::cout << "Vector's size: " << vect.size() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	vect.push_back(3);
	vect.push_back(5);
	vect.push_back(737);
	vect.push_back(0);

	MutantStack<int>::iterator	itStack = mstack.begin();
	MutantStack<int>::iterator	iteStack = mstack.end();
	MutantStack<int>::reverse_iterator	ritStack = mstack.rbegin();
	MutantStack<int>::reverse_iterator	riteStack = mstack.rend();

	std::vector<int>::iterator	itVect = vect.begin();
	std::vector<int>::iterator	iteVect = vect.end();
	std::vector<int>::reverse_iterator	ritVect = vect.rbegin();
	std::vector<int>::reverse_iterator	riteVect = vect.rend();

	++itStack;
	--itStack;

	++ritStack;
	--riteStack;

	++itVect;
	--itVect;

	++ritVect;
	--riteVect;

	/* Compare elelements */
	std::cout << "Stack:";
	while (itStack != iteStack) {
		std::cout << " " << *itStack;
		++itStack;
	}
	std::cout << std::endl;

	std::cout << "Vector:";
	while (itVect != iteVect) {
		std::cout << " " << *itVect;
		++itVect;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	/* Compare elements in reverse */
	std::cout << "Reversed stack:";
	while (ritStack != riteStack) {
		std::cout << " " << *ritStack;
		++ritStack;
	}
	std::cout << std::endl;

	std::cout << "Reversed vector:";
	while (ritVect != riteVect) {
		std::cout << " " << *ritVect;
		++ritVect;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);

	return 0;

}