/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:06 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/08 20:46:06 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"
int main()
{
	try
	{
		Bureaucrat a("Jack", 60);
		std::cout << a;
		Bureaucrat b("hamid", 1);
		std::cout << b;
		Form f("form1",false,50,60);
		std::cout << f;
		a.signForm(f);
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}