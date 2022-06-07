/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:31:02 by cvine             #+#    #+#             */
/*   Updated: 2022/06/06 17:57:56 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                                  Dog Class                                 //
// ************************************************************************** //

class Dog : public AAnimal {

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