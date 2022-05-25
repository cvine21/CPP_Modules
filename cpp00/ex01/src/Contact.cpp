/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:34:06 by cvine             #+#    #+#             */
/*   Updated: 2022/05/23 19:23:15 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

std::string	Contact::getFirstName(void) {return this->firstName;}

std::string	Contact::getLastName(void) {return this->lastName;}

std::string	Contact::getNickName(void) {return this->nickName;}

std::string	Contact::getPhoneNumber(void) {return this->phoneNumber;}

std::string	Contact::getDarkestSecret(void) {return this->darkestSecret;}

void		Contact::setFirstName(std::string x) {this->firstName = x;}

void		Contact::setLastName(std::string x) {this->lastName = x;}

void		Contact::setNickName(std::string x) {this->nickName = x;}

void		Contact::setPhoneNumber(std::string x) {this->phoneNumber = x;}

void		Contact::setDarkestSecret(std::string x) {this->darkestSecret = x;}