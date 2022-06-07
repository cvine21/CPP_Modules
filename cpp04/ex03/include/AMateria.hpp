/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 22:22:19 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP 

# include "ICharacter.hpp"
# include <iostream>

// ************************************************************************** //
//                                AMateria Class                              //
// ************************************************************************** //

class AMateria {

	protected:

		std::string const	_type;
	
	public:

		AMateria( void );
		AMateria( std::string const &type );
		AMateria( AMateria const& );
		virtual ~AMateria( void );
		AMateria & operator = ( AMateria const& );

		std::string const 	&getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

};

#endif /* __AMATERIA_HPP__ */