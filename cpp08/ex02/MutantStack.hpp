/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:07:31 by cvine             #+#    #+#             */
/*   Updated: 2022/06/21 17:20:25 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

// ************************************************************************** //
//                              MutantStack Class                             //
// ************************************************************************** //

template <typename T>
class MutantStack : public std::stack<T> {

	public:

		typedef typename
		MutantStack<T>::stack::container_type::iterator	iterator;

		typedef typename
		MutantStack<T>::container_type::reverse_iterator	reverse_iterator;
		
		iterator	begin();
		iterator	end();

		reverse_iterator	rbegin();
		reverse_iterator	rend();

};

# include "MutantStack.tpp"
#endif /* __MUTANTSTACK_HPP__ */