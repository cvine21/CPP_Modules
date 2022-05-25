/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:42:10 by cvine             #+#    #+#             */
/*   Updated: 2022/05/24 20:39:27 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main() {
	
	PhoneBook	phonebook;
	std::string	input;

	while (input.compare("EXIT") && !std::cin.eof()) {
		std::cout << "Enter a command -> ";		
		std::getline(std::cin, input);
		
		if (!input.compare("ADD"))
			phonebook.add();
		else if (!input.compare("SEARCH"))
			phonebook.search();
	}

	return 0;
}