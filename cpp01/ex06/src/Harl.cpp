/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:29:56 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 21:46:11 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::complain( std::string level ) {

	int i = 0;

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void		(Harl::*func[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (; levels[i] != level; ++i) {}

	switch(i) {
		case 0: (this->*func[0])();
		case 1: (this->*func[1])();
		case 2: (this->*func[2])();
		case 3: (this->*func[3])();
	}

}

void	Harl::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-";
	std::cout << "triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!";
	std::cout << std::endl << std::endl;

};

void	Harl::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!";
	std::cout << std::endl << std::endl;

};
void	Harl::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << std::endl;
	std::cout << "I’ve been coming for years whereas you started";
	std::cout << "working here since last month.";
	std::cout << std::endl << std::endl;

};
void	Harl::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl << std::endl;

};