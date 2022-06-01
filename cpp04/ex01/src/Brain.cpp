/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:25:39 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 13:41:34 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;

}

Brain::Brain( Brain const& x ) {

	std::cout << "Brain copy constructor called" << std::endl;

	for (int i = 0; i < 100; i++)
			_ideas[i] = x._ideas[i];

}

Brain & Brain::operator = ( Brain const& x ) {

	std::cout << "Brain copy assignment operator called" << std::endl;

	if (this != &x)
		for (int i = 0; i < 100; i++)
			_ideas[i] = x._ideas[i];

	return (*this);

}

Brain::~Brain( void ) {

	std::cout << "Brain destructor called" << std::endl;

}