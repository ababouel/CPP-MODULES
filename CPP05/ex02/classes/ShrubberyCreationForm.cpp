/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:56:45 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 19:47:11 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name, bool isSigned, int const gRSignIt, int const gRExecIt) : name(name), isSigned(isSigned), gRSignIt(gRSignIt), gRExecIt(gRExecIt)
{
	if (this->name == "")
		throw std::invalid_argument("you must add name and grade ");
	else if (this->gRSignIt < 1 || this->gRExecIt < 1)
		throw Form::GradeTooHighException();
	else if (this->gRSignIt > 145 || this->gRExecIt > 137)
		throw Form::GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm& operator=(const ShrubberyCreationForm	&form)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const &execute) const
{
	
}