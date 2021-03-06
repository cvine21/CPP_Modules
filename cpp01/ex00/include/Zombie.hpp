/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:47:44 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 10:13:43 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Zombie {

	public:

		Zombie( std::string name );
		~Zombie();

		std::string	getName( void );
		
		void		announce( void );

	private:
	
		std::string	name;

};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif /* __ZOMBIE_HPP__ */