/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:31:17 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/18 04:40:56 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) 
{
	std::string data[3] = {"hello world", "hi", "who am I ?"};
	::iter(data, 3,::swap);
	std::cout << "data=> " << data[0] << "\n";
	std::cout << "data=> " << data[1] << "\n";
	std::cout << "data=> " << data[2] << "\n";
	int dt[5] = {1,2,3,4,5};
	::iter(dt, 4,::swap);
	std::cout << "data=> " << dt[0] << "\n";
	std::cout << "data=> " << dt[1] << "\n";
	std::cout << "data=> " << dt[2] << "\n";
	std::cout << "data=> " << dt[3] << "\n";
	std::cout << "data=> " << dt[4] << "\n";
	return (0);
}