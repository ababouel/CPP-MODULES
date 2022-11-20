/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:43:19 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/20 01:15:33 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <map>
# include <vector>
# include <iterator>
# include <list>

class NotFoundException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("the number not found in container!!!");
		}
};
template <typename T>
void	easyFind(T& type, int number)
{
	typename T::iterator it;
	it = std::find(type.begin(), type.end(), number);
	try
	{
		if (it == type.end())
			throw NotFoundException();
		std::cout << "found the number: " << *it << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
}

#endif