/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 12:57:39 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

// ************************************************************************** //
//                                Brain Class                                //
// ************************************************************************** //

class Brain {

	public:

		Brain( void );
		Brain( std::string );
		Brain( Brain const& );
		virtual ~Brain( void );
		Brain & operator = ( Brain const& );

		virtual std::string	getType( void ) const;

		virtual void		makeSound( void ) const;

	protected:
	
		std::string	_type;

};

#endif /* __Brain_HPP__ */