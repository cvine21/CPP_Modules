/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 15:57:57 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <fstream>

// ************************************************************************** //
//                               Replacer Class                               //
// ************************************************************************** //

class Replacer {

	public:

		Replacer( std::string filename,
		std::string toReplace, std::string replaceWith );

		// void	setFile( std::string );

	private:

		std::string		filename;
		std::string		toReplace;
		std::string		replaceWith;

};

#endif /* __REPLACER_HPP__ */