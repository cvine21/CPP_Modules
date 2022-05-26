/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:24:25 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 11:36:39 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {

	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Memory adsresses:" << std::endl;
	std::cout << "- string: " << &brain << std::endl;
	std::cout << "- stringPTR: " << stringPTR << std::endl;
	std::cout << "- stringREF: " << &stringREF << std::endl;

	std::cout << "Values:" << std::endl;
	std::cout << "- string: " << brain << std::endl;
	std::cout << "- stringPTR: " << *stringPTR << std::endl;
	std::cout << "- stringREF: " << stringREF << std::endl;

	return 0;

}