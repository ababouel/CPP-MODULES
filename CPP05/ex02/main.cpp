/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:06 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 23:44:01 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"

int main()
{
	try
	{
		Bureaucrat a("Jack", 4);
		Bureaucrat b("hamid", 136);
		Bureaucrat c("rototo", 44);
		PresidentialPardonForm	pf("WhiteHouse");
		ShrubberyCreationForm	sf("TreeHouse");
		RobotomyRequestForm		rf("RototoHouse");
		a.signForm(pf);
		b.signForm(sf);
		c.signForm(rf);
		a.executeForm(pf);
		b.executeForm(sf);
		c.executeForm(rf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}