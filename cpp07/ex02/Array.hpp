/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:21:56 by cvine             #+#    #+#             */
/*   Updated: 2022/06/16 17:27:53 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

// ************************************************************************** //
//                                Array Class                                 //
// ************************************************************************** //

template <typename T>
class Array {

	private:
		int	_size;
		T	*_arr;

	public:
		Array();
		Array( unsigned );
		Array( const Array<T> & );
		Array<T> &operator = ( const Array<T> & );
		~Array();

		int	size() const;

		T &operator [] ( int );

};

#include "Array.tpp"
#endif /* __ARRAY_HPP__ */