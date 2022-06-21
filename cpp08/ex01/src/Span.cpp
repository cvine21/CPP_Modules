/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:23:52 by cvine             #+#    #+#             */
/*   Updated: 2022/06/21 11:51:38 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _size(0) { }

Span::Span(unsigned int n) : _size(n) { }

Span::Span(Span const &s) : _size(s._size), _values(s._values) {}

Span &Span::operator=(Span const &s) {

	if (this != &s) {
		_size = s._size;
		_values = s._values;
	}

	return *this;

}

Span::~Span() { }

unsigned int	Span::getN(void) const { return _size; }

std::vector<int>	Span::getValues() const { return _values; }

void Span::addNumber(int n) {

	if (_values.size() >= _size)
		throw std::out_of_range("out of range");

	_values.push_back(n);

}

void	Span::addNumber(std::vector<int>::iterator first,
						std::vector<int>::iterator last) {

	size_t	size = std::distance(first, last);

	if (size + _values.size() > getN())
		throw std::out_of_range("Not enough space");

	_values.insert(_values.end(), first, last);

}

int	Span::longestSpan( void )  {

	if (_values.size() < 2)
		throw std::range_error("Not enough elements");

	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;

	min = min_element(_values.begin(), _values.end());
	max = max_element(_values.begin(), _values.end());

	return (*max - *min);

}

int	Span::shortestSpan( void )  {

	if (_values.size() < 2)
		throw std::range_error("Not enough elements");

	sort(_values.begin(), _values.end());

	std::vector<int>::iterator	prev = _values.begin();
	std::vector<int>::iterator	next = prev + 1;

	int	span = *next - *prev;

	while (next != _values.end()) {
		if (*next - *prev < span)
			span = *next - *prev;
		++next;
		++prev;
	}

	return (span);

}