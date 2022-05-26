/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:12:13 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 16:16:07 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

// ************************************************************************** //
//                                 Harl Class                                 //
// ************************************************************************** //

class Harl {

	public:

		void	complain( std::string level );

	private:
	
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

};

#endif /* __HARL_HPP__ */