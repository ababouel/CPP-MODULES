/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:43:24 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/20 01:10:52 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main(int ac, char** av)
{
	if (ac == 3)
	{
		std::vector<int> vc;
		int myints[] = {1776,7,4,1337};
		vc.assign(myints, myints + 4);
		easyFind(vc,std::atoi(av[1]));
		std::list<int> ls;
		int strings[] = {1337,4,7,1776};
		ls.assign(strings, strings + 4);
		easyFind(ls, std::atoi(av[2]));
	}
	return (0);
}