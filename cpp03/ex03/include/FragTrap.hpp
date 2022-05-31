/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:14:00 by cvine             #+#    #+#             */
/*   Updated: 2022/05/31 15:53:09 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

// ************************************************************************** //
//                              FragTrap Class                                //
// ************************************************************************** //

class FragTrap : virtual public ClapTrap {

	public:

		FragTrap( void );
		FragTrap( std::string );
		FragTrap( FragTrap const& );
		~FragTrap( void );
		FragTrap & operator = ( FragTrap const& );

		void attack( const std::string& );
		void highFivesGuys(void);

};

#endif /* __FRAGTRAP_HPP__ */