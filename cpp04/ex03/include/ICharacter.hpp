/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 21:47:06 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP 

# include "AMateria.hpp"
# include <iostream>

// ************************************************************************** //
//                                ICharacter Class                            //
// ************************************************************************** //

class AMateria;

class ICharacter {

	public:

		virtual ~ICharacter() {}
		virtual std::string const &getName() const = 0;
		virtual void equip( AMateria *m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
                        
};

#endif /* __ICHARACTER_HPP__ */