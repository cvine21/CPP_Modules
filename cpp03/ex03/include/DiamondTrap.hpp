/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:14:00 by cvine             #+#    #+#             */
/*   Updated: 2022/05/31 18:21:23 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

// ************************************************************************** //
//                            DiamondTrap Class                               //
// ************************************************************************** //

class DiamondTrap : public ScavTrap, public FragTrap {

	public:

		DiamondTrap( void );
		DiamondTrap( std::string );
		DiamondTrap( DiamondTrap const& );
		~DiamondTrap( void );
		DiamondTrap & operator = ( DiamondTrap const& );

		void	whoAmI( void );

		using	FragTrap::_hitPoints;
		using	ScavTrap::_energyPoints;
		using	FragTrap::_attackDamage;
		using	ScavTrap::attack;

	private:

		std::string	_name;

};

#endif /* __DIAMONDTRAP_HPP__ */