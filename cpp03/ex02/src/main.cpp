/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:42:35 by cvine             #+#    #+#             */
/*   Updated: 2022/05/31 15:33:39 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	std::string s1 = "Clyde";
	std::string s2 = "Scarlet";

	ClapTrap claptrap(s1);
	FragTrap FragTrap(s2);

	std::cout << std::endl;
	claptrap.attack(s2);
	FragTrap.takeDamage(0);
	FragTrap.beRepaired(18);
	std::cout << std::endl;
	FragTrap.attack(s1);
	claptrap.takeDamage(20);
	FragTrap.attack(s1);
	claptrap.takeDamage(20);
	FragTrap.attack(s1);
	claptrap.beRepaired(64);
	std::cout << std::endl;
	FragTrap.highFivesGuys();
	FragTrap.attack(s1);
	std::cout << std::endl;
	FragTrap.takeDamage(100);
	FragTrap.takeDamage(1);
	FragTrap.attack(s2);
	FragTrap.beRepaired(200);
	std::cout << std::endl;

	return (0);
}