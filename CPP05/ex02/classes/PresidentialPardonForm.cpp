/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:10:05 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 19:49:36 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string const name, bool isSigned, int const gRSignIt, int const gRExecIt) : name(name), isSigned(isSigned), gRSignIt(gRSignIt), gRExecIt(gRExecIt)
{
	if (this->name == "")
		throw std::invalid_argument("you must add name and grade ");
	else if (this->gRSignIt < 1 || this->gRExecIt < 1)
		throw Form::GradeTooHighException();
	else if (this->gRSignIt > 25 || this->gRExecIt > 5)
		throw Form::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form)
{
	
}

PresidentialPardonForm::PresidentialPardonForm& operator=(const PresidentialPardonForm	&form)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void	PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
	
}