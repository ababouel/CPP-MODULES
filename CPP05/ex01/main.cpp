/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:06 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/08 15:33:38 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"
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