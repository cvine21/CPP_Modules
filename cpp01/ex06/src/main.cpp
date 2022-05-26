/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:10:38 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 21:35:50 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( int argc, char **argv )
{
	Harl harl;
	(void)argc;

	harl.complain(argv[1]);
	return 0;

}