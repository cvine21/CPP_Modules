/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:23:52 by cvine             #+#    #+#             */
/*   Updated: 2022/06/18 17:09:03 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int size ) : _n(size) {}

Span::Span( Span const &s ) : _n(s._n), _values(s._values) {}

Span &Span::operator=( Span const &s ) {

	if (this != &s) {
		_n = s._n;
		_values = s._values;
	}

	return *this;

}

Span::~Span( void ) {}

unsigned int	Span::getN( void ) const { return _n; }

std::vector<int>	Span::getV( void ) const { return _values; }

void Span::addNumber( int num ) {

	if (getN() == getV().size())
		throw std::out_of_range("The set is full");
	_values.push_back(num);

}

int	Span::shortestSpan( void )