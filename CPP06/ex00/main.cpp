/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:09:42 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/16 20:37:01 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

int main(int ac, char* av[])
{
	if (ac == 2)
	{
		std::string	data = av[1];
		double		nbDouble = std::atof(av[1]);
		int 		nbInt = static_cast<int>(av[1][0]);
		
		if (isNumber(data) || data.length() > 1)
			showFromDouble(nbDouble);
		else
			showFromInt(nbInt);
	}
	return (0);
}