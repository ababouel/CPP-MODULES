/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:23:35 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/19 15:51:53 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T>
void	swap(T &a, T &b)
{
	T c = a;
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
		if ((a < size))
		{
			func(tab[x], tab[a]);
		}
	}
}
#endif