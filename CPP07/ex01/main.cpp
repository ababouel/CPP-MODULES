/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:31:17 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/18 04:20:16 by ababouel         ###   ########.fr       */
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
	return (0);
}