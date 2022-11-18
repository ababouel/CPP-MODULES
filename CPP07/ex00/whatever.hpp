/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:34:45 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/18 02:34:09 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T>
T	max( T const & x, T const & y)
{
	return ((x >= y) ? x : y);
}

template < typename T>
T	min( T const & x, T const & y)
{
	return ((x <= y) ? x : y);
}

template < typename S>
void	swap(S  &a, S  &b)
{
	S c;
	c = a;
	a = b;
	b = c;
}


#endif