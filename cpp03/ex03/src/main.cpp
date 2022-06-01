/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:01:58 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 10:53:24 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::string s1 = "Clyde";
	std::string s2 = "Scarlet";

	DiamondTrap	diamondtrap(s1);
	std::cout << std::endl;

	diamondtrap.takeDamage(14);
	diamondtrap.beRepaired(18);
	std::cout << std::endl;

	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	std::cout << std::endl;

	diamondtrap.guardGate();
	diamondtrap.attack(s2);
	std::cout << std::endl;

	diamondtrap.highFivesGuys();
	std::cout << std::endl;

	diamondtrap.whoAmI();
	std::cout << std::endl;
	diamondtrap.beRepaired(18);

	diamondtrap.takeDamage(50);
	diamondtrap.takeDamage(50);

	diamondtrap.beRepaired(20);
	diamondtrap.attack(s2);

	std::cout << std::endl;
	return (0);
}