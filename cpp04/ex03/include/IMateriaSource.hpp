/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:35:51 by cvine             #+#    #+#             */
/*   Updated: 2022/06/07 16:39:10 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP 

# include "AMateria.hpp"
# include <iostream>

// ************************************************************************** //
//                                IMateriaSource Class                        //
// ************************************************************************** //

class AMateria;

class IMateriaSource {

	public:

		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria * ) = 0;
		virtual AMateria *createMateria( std::string const &type ) = 0;
                            
};

#endif /* __IMATERIASOURCE_HPP__ */