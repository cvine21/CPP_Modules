/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:10:38 by cvine             #+#    #+#             */
/*   Updated: 2022/05/27 17:18:01 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( int argc, char **argv )
{
	if (argc != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}

	Harl harl;

	harl.complain(argv[1]);
	return 0;

}