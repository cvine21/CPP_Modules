/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:12:13 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 11:01:36 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Zombie {

	public:

		Zombie();
		~Zombie();

		std::string	getName( void );
		void		setName( std::string name );

		void		announce( void );

	private:
	
		std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif /* __ZOMBIE_HPP__ */