/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:10:05 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 23:41:14 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target), name("PresidentialPardon"), isSigned(false), gRSignIt(25), gRExecIt(5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form)
{
	*this = form;
}

PresidentialPardonForm::PresidentialPardonForm& operator=(const PresidentialPardonForm	&form)
{
	this->isSigned = form.isSigned;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void	PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
	
}