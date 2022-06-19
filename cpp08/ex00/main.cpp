/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:57:51 by cvine             #+#    #+#             */
/*   Updated: 2022/06/18 15:38:41 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <deque>
#include <forward_list>
#include "easyfind.hpp"

static void	testVector( int val ) {

  	std::vector<int>			vect;
	std::vector<int>::iterator	it;

	for (int i = 0; i < 10; ++i)
		vect.push_back(i);

	try {
		std::cout << "Vector: ";
		for (it = easyfind(vect, val); it != vect.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}

static void	testList( int val ) {

	std::list<int>				lst;
	std::list<int>::iterator	it;

	for (int i = 0; i < 10; ++i)
		lst.push_back(i);

	try {
		std::cout << "List: ";
		for (it = easyfind(lst, val); it != lst.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}

static void	testForwardList( int val ) {

	std::forward_list<int>				flst;
	std::forward_list<int>::iterator	it;

	for (int i = 9; i > 0; --i)
		flst.push_front(i);

	try {
		std::cout << "Forward_list: ";
		for (it = easyfind(flst, val); it != flst.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}

static void	testArray( int val ) {

	std::array<int, 10>				arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::array<int, 10>::iterator	it;

	try {
		std::cout << "Array: ";
		for (it = easyfind(arr, val); it != arr.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}

static void	testDeque( int val ) {

  	std::deque<int>				deq;
	std::deque<int>::iterator	it;

	for (int i = 0; i < 10; ++i)
		deq.push_back(i);

	try {
		std::cout << "Deque: ";
		for (it = easyfind(deq, val); it != deq.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}

int main() {

	int	val = 5;

	testVector(val);
	testList(val);
	testForwardList(val);
	testArray(val);
	testDeque(val);

	return 0;

}