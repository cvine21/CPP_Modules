/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 12:45:17 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

// ************************************************************************** //
//                               HumanB Class                                 //
// ************************************************************************** //

class HumanB {

	public:

		HumanB( std::string name );

		std::string	getName( void ) const;
		void		setWeapon( Weapon &weapon );

		void		attack( void );

	private:
	
		std::string	name;
		Weapon		*weapon;

};

#endif /* __HUMANB_HPP__ */