/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:08:50 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 19:49:24 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string const name, bool isSigned, int const gRSignIt, int const gRExecIt) : name(name), isSigned(isSigned), gRSignIt(gRSignIt), gRExecIt(gRExecIt)
{
	if (this->name == "")
		throw std::invalid_argument("you must add name and grade ");
	else if (this->gRSignIt < 1 || this->gRExecIt < 1)
		throw Form::GradeTooHighException();
	else if (this->gRSignIt > 72 || this->gRExecIt > 45)
		throw Form::GradeTooLowException();
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
{
	
}

RobotomyRequestForm::RobotomyRequestForm& operator=(const RobotomyRequestForm	&form)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

void	RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
	
}