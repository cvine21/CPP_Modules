/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:01:43 by cvine             #+#    #+#             */
/*   Updated: 2022/05/31 17:01:43 by cvine            ###   ########.fr       */
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

		std::string	getName( void ) const;
		int			getHP( void ) const;
		int			getEP( void ) const;
		int			getAD( void ) const;

		void		setName( std::string );
		void		setHP( int );
		void		setEP( int );
		void		setAD( int );

		void		attack( const std::string& );
		void		takeDamage( unsigned int );
		void		beRepaired( unsigned int );

	protected:
	
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

};

#endif /* __CLAPTRAP_HPP__ */