/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:08:50 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 16:07:17 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), target(target)
{
	if (this->target == "")
		throw std::invalid_argument("you must add a target ");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
{
	*this = form;	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm	&form)
{
	return ((RobotomyRequestForm&)form);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
	execute.getName();
}