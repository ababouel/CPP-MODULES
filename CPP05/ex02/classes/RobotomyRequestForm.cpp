/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:08:50 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 21:04:45 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), target(target)
{
	if (this->target == "")
		throw std::invalid_argument("you must add a target ");
	std::cout << "zziiiiiiizzzz!!!!!\n";
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
	if (this->getIsSigned() == true &&  execute.getGrade() < this->getGRExecIt())
	{
		std::cout << this->target <<" has been robotomized successfully 50% of the time";
	}
	else if (this->getIsSigned() == false)
		throw std::invalid_argument("the robotomy failed because the form is  not signed yet !!!");
	else
		throw GradeTooLowException(execute.getName());
}