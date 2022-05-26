/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:44:53 by cvine             #+#    #+#             */
/*   Updated: 2022/05/26 15:03:40 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer( std::string filename,
std::string toReplace, std::string replaceWith )
: filename(filename), toReplace(toReplace), replaceWith(replaceWith) {}