/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:57:33 by cvine             #+#    #+#             */
/*   Updated: 2022/05/27 17:07:56 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main(int argc, char **argv) {

	Replacer	sed(argc);
	std::string	line;

	sed.setFilename(argv[1]);
	sed.setToReplace(argv[2]);
	sed.setReplaceWith(argv[3]);
	sed.setInfile();
	sed.setOutfile();
	
	while (getline(sed.getInfile(), line)) {
		sed.replaceStr(&line);
		sed.getOutfile() << line << std::endl;
	}

	return 0;

}