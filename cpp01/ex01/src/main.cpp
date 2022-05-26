/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:32:34 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 11:17:06 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	int n = 10;

	Zombie *horde = zombieHorde(n, "Rick");

	for (int i = 0; i < n; i++) { horde[i].announce(); }

	delete [] horde;

	return 0;

}