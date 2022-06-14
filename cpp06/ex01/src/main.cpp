/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:40:52 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 16:51:21 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <iostream>

int main() {

	Data		ptr;
	Data		*deserializedPtr;
	uintptr_t	raw;

	ptr.name = "Raphael";
	ptr.age	= 23;

	std::cout << "Source structure: " << std::endl;
	std::cout << "    name: " << ptr.name << std::endl;
	std::cout << "    age: " << ptr.age << std::endl;
	std::cout << "    address: " << &ptr << std::endl;
	std::cout << std::endl;

	raw = serialize(&ptr);
	deserializedPtr = deserialize(raw);

	std::cout << "Deserialized structure: " << std::endl;
	std::cout << "    name: " << deserializedPtr->name << std::endl;
	std::cout << "    age: " << deserializedPtr->age << std::endl;
	std::cout << "    address: " << deserializedPtr << std::endl;

}
