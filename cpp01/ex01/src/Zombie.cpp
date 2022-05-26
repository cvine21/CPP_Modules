/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:28:07 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 11:11:57 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "iostream"

Zombie::Zombie() {}

std::string	Zombie::getName( void ) {return this->name;}

void		Zombie::setName( std::string name ) {this->name = name;}

Zombie::~Zombie() {

	std::cout << "Zombie " << getName() << " commited suicide" << std::endl;

}


void		Zombie::announce( void ) {

	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;

}