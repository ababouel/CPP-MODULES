/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:23:35 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/18 04:20:45 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T>
void	swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}
template < typename T>
void	iter(T *tab, int size, void (func)(T &x, T &y))
{
	int a;
	for (int x = 0; x < size; x++)
	{
		a = x + 1;
		if ((a < size) && (rand() % 2))
		{
			func(tab[x], tab[a]);
		}
	}
}
#endif