/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:15:48 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 12:45:01 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : name(name) {}

std::string	HumanB::getName( void ) const {return this->name;}

void		HumanB::setWeapon( Weapon &weapon ) {this->weapon = &weapon;}

void		HumanB::attack( void ) {

	std::cout << getName() << " attacks with their "<< weapon->getType();
	std::cout << std::endl;

}