/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:38:08 by cvine             #+#    #+#             */
/*   Updated: 2022/05/24 20:48:10 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

// ************************************************************************** //
//                               PhoneBook Class                              //
// ************************************************************************** //

class	PhoneBook {

	public:

		PhoneBook();

		void		add(void);
		void		search(void);
		void		printContactInfo(int index);
		std::string	enterContactInfo(std::string fieldName);

	private:

		Contact	contacts[8];
		int		contactsCounter;

};

#endif /* __PHONEBOOK_HPP__ */