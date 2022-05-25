/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:08:23 by cvine             #+#    #+#             */
/*   Updated: 2022/05/25 21:01:19 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {

	Zombie	*heapZombie1 = newZombie("Raphael");
	Zombie	*heapZombie2 = newZombie("Igor");

	std::cout << "Zombies on the heap:" << std::endl;

	heapZombie1->announce();
	heapZombie2->announce();

	delete	heapZombie1;
	delete	heapZombie2;

	std::cout << std::endl << "Zombies on the stack:" << std::endl;

	randomChump("Roma");
	randomChump("Zhenya");

	return 0;

}