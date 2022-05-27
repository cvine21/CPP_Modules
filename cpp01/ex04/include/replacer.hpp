/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/27 17:05:28 by cvine            ###   ########.fr       */
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

		Replacer( int );

		void			setFilename( std::string );
		void			setToReplace( std::string );
		void			setReplaceWith( std::string );
		void			setInfile( void );
		void			setOutfile( void );

		std::string		getFilename( void );
		std::string		getToReplace( void );
		std::string		getReplaceWith( void );
		std::ifstream	&getInfile( void );
		std::ofstream	&getOutfile( void );

		void			error( std::string );
		void			replaceStr( std::string *line );

	private:

		int				argc;

		std::string		filename;
		std::string		toReplace;
		std::string		replaceWith;
		std::ifstream	infile;
		std::ofstream	outfile;
};


#endif /* __REPLACER_HPP__ */