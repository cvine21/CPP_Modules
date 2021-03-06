/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:09:18 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:07:10 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

// ************************************************************************** //
//                                 Brain Class                                //
// ************************************************************************** //

class Brain {

	public:

		Brain( void );
		Brain( Brain const& );
		virtual ~Brain( void );
		Brain & operator = ( Brain const& );

		std::string	getIdea( int ) const;

	private:
	
		std::string	_ideas[100];

};

#endif /* __BRAIN_HPP__ */