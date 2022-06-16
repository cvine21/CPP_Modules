/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:44:31 by cvine             #+#    #+#             */
/*   Updated: 2022/06/16 17:28:46 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <stdexcept>
#include "Array.hpp"

template <typename T>
Array<T>::Array ( void ) : _size(0), _arr(new T[1]) {}

template <typename T>
Array<T>::Array( unsigned n ) : _size(n), _arr(new T[n]) {}

template <typename T>
Array<T>::Array( const Array<T> & a ) : _size(a.size()) {

	_arr = new T[size()];
	for (int i = 0; i < size(); i++) {
		_arr[i] = (a._arr)[i];
	}

}

template <typename T>
Array<T> & Array<T>::operator = (const Array<T> & a) {

	if (this != &a) {
		delete [] _arr;
		_arr = new T[size()];
		for (int i = 0; i < size(); i++) {
			_arr[i] = (a._arr)[i];
		}
	}

	return (*this);

}

template <typename T>
T &Array<T>::operator [] ( int i ) {
	
	if (i >= size() || i < 0)
		throw std::exception();

	return (_arr[i]);

}

template <typename T>
Array<T>::~Array() { delete [] _arr; }

template <typename T>
int	Array<T>::size() const { return (_size); }