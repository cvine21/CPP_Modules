/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:15:48 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 12:39:25 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

std::string	HumanA::getName( void ) const {return this->name;}

void		HumanA::attack( void ) {

	std::cout << getName() << " attacks with their " << this->weapon.getType();
	std::cout << std::endl;

};