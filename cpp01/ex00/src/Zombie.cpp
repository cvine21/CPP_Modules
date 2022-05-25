/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:52:40 by cvine             #+#    #+#             */
/*   Updated: 2022/05/25 20:43:26 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "iostream"

Zombie::Zombie( std::string name ) : name(name) {}

Zombie::~Zombie() {

	std::cout << "Zombie " << getName() << " commited suicide" << std::endl;

}

std::string	Zombie::getName( void ) {return this->name;}

void		Zombie::announce( void ) {

	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

