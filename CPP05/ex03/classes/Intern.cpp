/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:53:48 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/13 01:23:16 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "PresidentialPardonForm.h"
# include "RobotomyRequestForm.h"
# include "ShrubberyCreationForm.h"

Intern::Intern(){}
Intern::Intern(const Intern &intern)
{
	*this = intern;
}
Intern& Intern::operator=(const Intern	&itern)
{
	return ((Intern &)itern);
}
Intern::~Intern(){}
Form* Intern::makeForm(std::string name, std::string target)
{
	int state = 0;
	std::string forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	while (state < 5)
	{
		if (state < 4 && name == forms[state])
			break;
		state++;
	}
	switch (state)
	{
	case 0:
		std::cout << "Intern creates " + name + "\n";
		return (new RobotomyRequestForm(target));
	case 1:
		std::cout << "Intern creates " + name + "\n";
		return (new ShrubberyCreationForm(target));
	case 2:
		std::cout << "Intern creates " + name + "\n";
		return (new PresidentialPardonForm(target));
	default:
		std::cout << "this forms name :" + name + " doesn't exist!!!\n";
		return (NULL);
	}
}
