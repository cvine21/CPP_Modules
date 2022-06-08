/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/08 19:34:18 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP 

# include "AMateria.hpp"
# include <iostream>

// ************************************************************************** //
//                                 Character Class                            //
// ************************************************************************** //

class AMateria;

class Character : public ICharacter {

	private:

		std::string	_name;
		AMateria	*_inventory[4];

	public:

		Character();
		Character( std::string );
		~Character();
		Character( Character const &c );
		Character &operator = ( Character const & );

		std::string const	&getName() const;
		AMateria			*getMateria( int idx ) const;
		void				equip( AMateria *m );
		void				unequip( int );
		void				use( int, ICharacter & );

};

#endif /* __CHARACTER_HPP__ */