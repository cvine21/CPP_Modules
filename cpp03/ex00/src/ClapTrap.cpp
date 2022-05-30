/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:01:29 by marvin            #+#    #+#             */
/*   Updated: 2022/05/30 10:01:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {}

ClapTrap::ClapTrap( std::string name ) : name(name) {}

ClapTrap::ClapTrap( ClapTrap const& x ) : 
name(x.name), hitPoints(x.hitPoint) {}
