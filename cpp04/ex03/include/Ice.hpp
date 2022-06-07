/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:56:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 21:47:09 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP 

# include "AMateria.hpp"

// ************************************************************************** //
//                                Ice Class                                   //
// ************************************************************************** //

class Ice : public AMateria {

	public:

		Ice( void );
		Ice( Ice const& );
		~Ice( void );
		Ice & operator = ( Ice const& );

		std::string const	&getType() const; //Returns the materia type
		Ice					*clone() const;
		void				use(ICharacter &target);

};

#endif /* __ICE_HPP__ */