/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:35:43 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 16:49:45 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Data*	deserialize(uintptr_t raw) {

	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);

	return ptr;

}
