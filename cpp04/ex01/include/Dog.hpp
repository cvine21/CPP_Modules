/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:31:02 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:17:04 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                                  Dog Class                                 //
// ************************************************************************** //

class Dog : public Animal {

	public:

		Dog( void );
		Dog( Dog const& );
		~Dog( void );
		Dog & operator = ( Dog const& );

		Brain	*getBrain( void ) const;
		void	makeSound( void ) const;

	private:

		Brain	*_brain;

};

#endif /* __DOG_HPP__ */