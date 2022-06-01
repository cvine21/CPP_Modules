/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:22:36 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 13:06:38 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

// ************************************************************************** //
//                                Animal Class                                //
// ************************************************************************** //

class Animal {

	public:

		Animal( void );
		Animal( Animal const& );
		virtual ~Animal( void );
		Animal & operator = ( Animal const& );

		virtual std::string	getType( void ) const;

		virtual void		makeSound( void ) const;

	protected:
	
		std::string	_type;

};

#endif /* __ANIMAL_HPP__ */