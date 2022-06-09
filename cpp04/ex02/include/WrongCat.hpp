/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:18:35 by cvine             #+#    #+#             */
/*   Updated: 2022/06/09 11:18:13 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

// ************************************************************************** //
//                                WrongCat Class                              //
// ************************************************************************** //

class WrongCat : public WrongAnimal {

	public:

		WrongCat( void );
		WrongCat( WrongCat const& );
		~WrongCat( void );
		WrongCat & operator = ( WrongCat const& );

		void	makeSound( void ) const;

};

#endif /* __WRONGCAT_HPP__ */