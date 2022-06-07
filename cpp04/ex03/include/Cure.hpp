/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:56:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 21:47:08 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP 

# include "AMateria.hpp"

// ************************************************************************** //
//                                Cure Class                                  //
// ************************************************************************** //

class Cure : public AMateria {

	public:

		Cure( void );
		Cure( Cure const& );
		~Cure( void );
		Cure & operator = ( Cure const& );

		std::string const	&getType() const; //Returns the materia type
		Cure					*clone() const;
		void				use(ICharacter &target);

};

#endif /* __CURE_HPP__ */