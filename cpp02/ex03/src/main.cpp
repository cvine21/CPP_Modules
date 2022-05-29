/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:45:28 by cvine             #+#    #+#             */
/*   Updated: 2022/05/29 21:16:49 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main( void ) {

	Point a( 0, 0 );
	Point b( 10, 30 );
	Point c( 20, 0 );
	Point point( 10, 15 );
	
	std::cout << (bsp(a, b, c, point) ? "Inside" : "Not inside") << std::endl;

	return 0;

}