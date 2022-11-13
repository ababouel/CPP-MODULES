/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:06 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/13 01:25:04 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.hpp"
int main()
{
	try
	{
		Intern  someRandomIntern;
    	Form*   rrf;
    	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
    	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}