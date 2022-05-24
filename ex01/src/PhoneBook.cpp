/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:34:09 by cvine             #+#    #+#             */
/*   Updated: 2022/05/24 20:39:08 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : contactsCounter(0) {}

std::string	PhoneBook::enterContactInfo(std::string fieldName) {

	std::string	input;

	do {
		std::cout << fieldName;
		if (std::getline(std::cin, input).eof())
			exit(EXIT_SUCCESS);
	} while (input.empty());

	return (input);
}

void	PhoneBook::add(void) {

	Contact		contact;

	contact.setFirstName(enterContactInfo("- First name: "));
	contact.setLastName(enterContactInfo("- Last name: "));
	contact.setNickName(enterContactInfo("- Nickname: "));
	contact.setPhoneNumber(enterContactInfo("- Phone numer: "));
	contact.setDarkestSecret(enterContactInfo("- Darkest secret: "));

	if (this->contactsCounter == 8)
		this->contactsCounter = 0;
	this->contacts[this->contactsCounter] = contact;
	this->contactsCounter++;

	std::cout << "*** Contact has been successfully added! ***" << std::endl;
}

std::string	trimField(std::string field) {
	return (field.length() > 10 ? field.substr(0, 9).append(".") : field);
}

void	PhoneBook::printContactInfo(int index) {

	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10);
	std::cout << trimField(this->contacts[index].getFirstName()) << "|";
	std::cout << std::setw(10);
	std::cout << trimField(this->contacts[index].getLastName()) << "|";
	std::cout << std::setw(10);
	std::cout << trimField(this->contacts[index].getNickName()) << "|"; 
	std::cout << std::endl;

}

void	PhoneBook::search(void) {

	std::string	input;
	int			index;
	
	while (true) {
		std::cout << "- Сontact index: ";
		
		if (std::getline(std::cin, input).eof())
			exit(EXIT_SUCCESS);

		if (input.length() == 1 && '0' <= input.at(0) && input.at(0) <= '7') {
			index = atoi(input.c_str());
			break;
		} else
			std::cout << "Invalid index. Try again" << std::endl;
	}

	printContactInfo(index);
}