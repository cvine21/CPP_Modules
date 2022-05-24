/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:34:09 by cvine             #+#    #+#             */
/*   Updated: 2022/05/24 18:08:57 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : contactsCounter(0) {}

void	addContactInfo(Contact &contact) {

	std::string	input;

	do {
		std::cout << "- First name: ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setFirstName(input);

	do {
		std::cout << "- Last name: ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setLastName(input);

	do {
		std::cout << "- Nickname: ";
		std::getline(std::cin, input);
	} while(input.empty());
	contact.setNickName(input);

	do {
		std::cout << "- Phone numer: ";
		std::getline(std::cin, input);
	} while(input.empty());
	contact.setPhoneNumber(input);

	do {
		std::cout << "- Darkest secret: ";
		std::getline(std::cin, input);
	} while(input.empty());
	contact.setDarkestSecret(input);

}

void	PhoneBook::add(void) {

	Contact		contact;

	addContactInfo(contact);

	if (this->contactsCounter == 8)
		this->contactsCounter = 0;

	this->contacts[this->contactsCounter] = contact;
	this->contactsCounter++;

	std::cout << "*** Contact has been successfully added! ***" << std::endl;
}

std::string	trimField(std::string field) {
	return (field.length() > 10 ? field.substr(0, 9).append(".") : field);
}

void	PhoneBook::search(void) {

	std::string	input;
	int			index;
	
	while (true) {
		std::cout << "- Сontact index: ";
		std::getline(std::cin, input);
		if (input.length() == 1 && '0' <= input.at(0) && input.at(0) <= '7') {
			index = atoi(input.c_str());
			break;
		} else
			std::cout << "Invalid index. Try again" << std::endl;
	}

	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10);
	std::cout << trimField(this->contacts[index].getFirstName()) << "|";
	std::cout << std::setw(10);
	std::cout << trimField(this->contacts[index].getLastName()) << "|";
	std::cout << std::setw(10);
	std::cout << trimField(this->contacts[index].getNickName()) << "|"; 
	std::cout << std::endl;
}