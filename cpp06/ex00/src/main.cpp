/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:42:44 by cvine             #+#    #+#             */
/*   Updated: 2022/06/14 14:14:19 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "String.hpp"

int main(int argc, char **argv) {

	String	str(argv[1]);
	char	c;
	int		i;
	float	f;
	double	d;

	if (argc != 2) {
		std::cout << "Invalid number of arguments";
		return 0;
	}
	
	c = static_cast<char>(str);
	i = static_cast<int>(str);
	f = static_cast<float>(str);
	d = static_cast<double>(str);

	return 0;

}