/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/28 15:52:41 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// ************************************************************************** //
//                              ClapTrap Class                                //
// ************************************************************************** //

class ClapTrap {

	public:

		ClapTrap( void );
		ClapTrap( std::string );
		ClapTrap( ClapTrap const& );
		~ClapTrap( void );
		ClapTrap & operator = ( ClapTrap const& );

		void attack( const std::string& );
		void takeDamage( unsigned int );
		void beRepaired( unsigned int );

	private:
	
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

};

#endif /* __CLAPTRAP_HPP__ */