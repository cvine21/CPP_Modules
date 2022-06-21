/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:07:31 by cvine             #+#    #+#             */
/*   Updated: 2022/06/21 11:51:17 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

// ************************************************************************** //
//                                Span Class                                  //
// ************************************************************************** //

class Span {

	private:
	
		unsigned int		_size;
		std::vector<int>	_values;

	public:

		Span(void);
		Span(unsigned int);
		Span(Span const&);
		~Span(void);
		Span & operator = (Span const&);


		unsigned int		getN(void) const;
		std::vector<int>	getValues(void) const;
		int					shortestSpan(void);
		int					longestSpan(void);
		void				addNumber(int);
		void				addNumber(std::vector<int>::iterator,
									std::vector<int>::iterator);

};

#endif /* __SPAN_HPP__ */