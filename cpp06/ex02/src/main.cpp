/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:40:52 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 20:17:26 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>

int main () {

	srand(time(NULL));

	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();

	identify(rand1);
	identify(rand2);
	identify(rand3);

	return 0;
}