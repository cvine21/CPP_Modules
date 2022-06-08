/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:35:51 by cvine             #+#    #+#             */
/*   Updated: 2022/06/08 19:08:08 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP 

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

// ************************************************************************** //
//                                 MateriaSource Class                        //
// ************************************************************************** //

class	AMateria;

class	MateriaSource : public IMateriaSource {

	private:

		AMateria *_inventory[4];

	public:

		MateriaSource();
		MateriaSource( MateriaSource const& );
		MateriaSource & operator = ( MateriaSource const& );
		~MateriaSource();

		void		learnMateria( AMateria * );
		AMateria	*createMateria( std::string const & );

};

#endif /* __MATERIASOURCE_HPP__ */