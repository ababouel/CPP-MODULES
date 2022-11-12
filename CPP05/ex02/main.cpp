/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:06 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 20:39:58 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
int main()
{
	try
	{
		Bureaucrat a("Jack", 1);
		std::cout << a;
		Bureaucrat b("hamid", 150);
		std::cout << b;
		PresidentialPardonForm  f("home");
		std::cout << f;
		a.signForm(f);
		std::cout << f;
		b.signForm(f);
		std::cout << f;
		a.executeForm(f);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}