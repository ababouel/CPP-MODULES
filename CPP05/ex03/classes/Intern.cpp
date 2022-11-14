/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:53:48 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/14 17:14:24 by ababouel         ###   ########.fr       */
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


Form* Intern::shrubbery(std::string target)
{
	std::cout << "Intern creates shrubbery creation \n";
	return (new ShrubberyCreationForm(target));
}
Form* Intern::president(std::string target)
{
	std::cout << "Intern creates shrubbery creation \n";
	return (new PresidentialPardonForm(target));
}
Form* Intern::robotomy(std::string	target)
{
	std::cout << "Intern creates robotomy request \n";
	return (new RobotomyRequestForm(target));
}
Form* Intern::makeForm(std::string name, std::string target)
{
	int state = 0;
	std::string forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form* (Intern::*arForm[3])(std::string target) = {&Intern::shrubbery(target), &Intern::robotomy(target), &Intern::president(target)};
	while (state < 3)
	{
		if (state < 3 && name == forms[state])
			break;
		state++;
	}
	switch (state)
	{
	case 0:
		return ((this->*arForm[1])(target));
	case 1:
		return ((this->*arForm[0])(target));
	case 2:
		return ((this->*arForm[2])(target));
	default:
		std::cout << "this forms name :" + name + " doesn't exist!!!\n";
		return (NULL);
	}
}
