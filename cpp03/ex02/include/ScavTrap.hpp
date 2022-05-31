/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:14:00 by cvine             #+#    #+#             */
/*   Updated: 2022/05/31 15:36:04 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// ************************************************************************** //
//                              ScavTrap Class                                //
// ************************************************************************** //

class ScavTrap : public ClapTrap {

	public:

		ScavTrap( void );
		ScavTrap( std::string );
		ScavTrap( ScavTrap const& );
		~ScavTrap( void );
		ScavTrap & operator = ( ScavTrap const& );

		void attack( const std::string& );
		void guardGate( void );

};

#endif /* __SCAVTRAP_HPP__ */