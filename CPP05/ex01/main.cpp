/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:06 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/05 18:08:05 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat a("Jack", 149);
		std::cout << a << "\n";
		Bureaucrat b("hamid", 1);
		std::cout << b << "\n";
		Bureaucrat d("bwww", 5);
		std::cout << d << "\n";
		Bureaucrat e("sseat", 151);
		std::cout << e << "\n";
		Bureaucrat c("kaleb", 0);
		std::cout << c << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}