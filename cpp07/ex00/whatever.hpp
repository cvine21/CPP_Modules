/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:52:18 by cvine             #+#    #+#             */
/*   Updated: 2022/06/16 12:23:44 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap( T &a, T &b ) {

	T	tmp = a;

	a = b;
	b = tmp;

}

template <typename T>
T	min( T a, T b ) { return (a <= b ? a : b); }

template <typename T>
T	max( T a, T b ) { return (a >= b ? a : b); }

#endif