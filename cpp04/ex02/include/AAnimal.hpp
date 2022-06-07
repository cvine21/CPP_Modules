/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:59:03 by cvine             #+#    #+#             */
/*   Updated: 2022/06/06 17:59:09 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

// ************************************************************************** //
//                                 AAnimal Class                              //
// ************************************************************************** //

class AAnimal {

	public:

		AAnimal( void );
		AAnimal( AAnimal const& );
		virtual ~AAnimal( void );
		AAnimal & operator = ( AAnimal const& );

		virtual std::string	getType( void ) const;

		virtual void		makeSound( void ) const = 0;

	protected:
	
		std::string	_type;

};

#endif /* __AANIMAL_HPP__ */