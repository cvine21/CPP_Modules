/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 12:39:14 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

// ************************************************************************** //
//                               HumanA Class                                 //
// ************************************************************************** //

class HumanA {

	public:

		HumanA( std::string name, Weapon &weapon);

		std::string	getName( void ) const;

		void		attack( void );

	private:
	
		std::string	name;
		Weapon		&weapon;

};

#endif /* __HUMANA_HPP__ */