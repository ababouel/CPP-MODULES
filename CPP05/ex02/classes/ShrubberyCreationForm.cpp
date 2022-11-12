/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:56:45 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 21:09:30 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :  Form("Shrubbery", 145, 137), target(target)
{
	if (this->target == "")
		throw std::invalid_argument("you must add a target ");
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
{
	*this = form;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm	&form)
{
	return ((ShrubberyCreationForm &) form);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const &execute) const
{
	if (this->getIsSigned() == true && execute.getGrade() <= this->getGRExecIt())
	{
		std::ofstream	file(this->target + "_shrubbery");
		if(file.is_open())
		{
			file << 
			"			 _ \n \
			| | \n \
			| |_ _ __ ___  ___ \n \
			| __| '__/ _ \\/ _ \\ \n \
			| |_| | |  __/  __/ \n \
			 \\__|_|  \\___|\\___| \n ";
			file.close();
		}
		std::cout << "heyluck\n";
	}
	else if (this->getIsSigned() == false)
		throw std::invalid_argument("The " + this->getName() + " not yet signed !!!\n");
	else
		throw GradeTooLowException(execute.getName());
}