/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:02:22 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 16:52:19 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <cstdint>
#include <string>

struct	Data {

	std::string	name;
	int			age;

};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif /* __SERIALIZATION_HPP__ */