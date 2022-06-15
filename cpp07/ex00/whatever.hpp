/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:52:18 by cvine             #+#    #+#             */
/*   Updated: 2022/06/15 16:39:12 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename Value>
void	swap( Value &a, Value &b ) {

	Value	tmp = a;

	a = b;
	b = tmp;

}

template <typename Value>
Value	min( Value a, Value b ) { return (a <= b ? a : b); }

template <typename Value>
Value	max( Value a, Value b ) { return (a >= b ? a : b); }