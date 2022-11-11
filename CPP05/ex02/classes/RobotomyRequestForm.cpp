/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:08:50 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 23:46:30 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : target(target), name("Robotomy"), isSigned(false), gRSignIt(72), gRExecIt(45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
{
	*this = form;	
}

RobotomyRequestForm::RobotomyRequestForm& operator=(const RobotomyRequestForm	&form)
{
	this->isSigned = form.isSigned;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
	
}