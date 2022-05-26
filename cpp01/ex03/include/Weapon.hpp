/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 12:29:44 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

// ************************************************************************** //
//                               Weapon Class                                 //
// ************************************************************************** //

class Weapon {

	public:

		Weapon();
		Weapon( std::string type );

		std::string	getType( void ) const;
		void		setType( std::string type );

	private:
	
		std::string	type;

};

#endif /* __WEAPON_HPP__ */