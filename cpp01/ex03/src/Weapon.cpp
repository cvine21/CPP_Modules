/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:10:40 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 12:54:06 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon( std::string type) : type(type) {}

std::string	Weapon::getType( void ) const {return this->type;}

void		Weapon::setType( std::string type ) {this->type = type;}
