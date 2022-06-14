/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:35:40 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 16:50:54 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data *ptr) {

	uintptr_t	val;

	val = reinterpret_cast<uintptr_t>(ptr);

	return val;

}
