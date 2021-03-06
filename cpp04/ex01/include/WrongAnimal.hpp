/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:11:27 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:08:28 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

// ************************************************************************** //
//                                WrongAnimal Class                           //
// ************************************************************************** //

class WrongAnimal {

	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const& );
		~WrongAnimal( void );
		WrongAnimal & operator = ( WrongAnimal const& );

		std::string	getType( void ) const;
		void	makeSound( void ) const;

	protected:
	
		std::string	_type;

};

#endif /* __WRONGANIMAL_HPP__ */