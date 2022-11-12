/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:10:05 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 17:03:33 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5), target(target) 
{
	if (this->target == "")
		throw std::invalid_argument("you must add a target ");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form)
{
	*this = form;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm	&form)
{
	return ((PresidentialPardonForm&)form);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
	if (this->getIsSigned() == true &&  execute.getGrade() > this->getGRExecIt())
	{
		
	}
}