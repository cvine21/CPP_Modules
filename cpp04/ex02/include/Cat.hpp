/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:31:02 by cvine             #+#    #+#             */
/*   Updated: 2022/06/06 17:57:56 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                                  Cat Class                                 //
// ************************************************************************** //

class Cat : public AAnimal {

	public:

		Cat( void );
		Cat( Cat const& );
		~Cat( void );
		Cat & operator = ( Cat const& );

		Brain	*getBrain( void ) const;

		void	makeSound( void ) const;

	private:

		Brain	*_brain;

};

#endif /* __CAT_HPP__ */