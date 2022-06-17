/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:24:20 by cvine             #+#    #+#             */
/*   Updated: 2022/06/17 15:52:38 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

class Awesome {

	public:

		Awesome( void ): _n(42) {}

		int	getN( void ) const { return this->_n; }

	private:

		int _n;

};

std::ostream & operator << (std::ostream &o, const Awesome &a) {

	o << a.getN();

	return o;

}

template <typename T>
void	print( T const & x ) { std::cout << x << std::endl; }

int main( void ) {

	int	tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;

}