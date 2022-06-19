/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:50:40 by cvine             #+#    #+#             */
/*   Updated: 2022/06/18 12:58:41 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>

class	NoSuchValueException : public std::exception {

	public:
		const char	*what() const throw() {
			return "No such value in the set";
		}
};

template <typename T>
typename T::iterator 	easyfind( T &container, int val ) {

	typename T::iterator it;

	it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
		throw NoSuchValueException();
	
	return it;

}