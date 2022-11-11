/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:24:22 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 23:30:23 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"

const char* Form::GradeTooHighException::what() const throw()
{
	return "The bureaucrat grade is too high!!!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "The bureaucrat grade is too low!!!";
}

Form::Form(std::string const name, bool isSigned, int const gRSignIt, int const gRExecIt) : name(name), gRSignIt(gRSignIt), gRExecIt(gRExecIt)
{
	if (this->name == "")
		throw std::invalid_argument("you must add name and grade ");
	else if (this->gRSignIt < 1 || this->gRExecIt < 1)
		throw Form::GradeTooHighException();
	else if (this->gRSignIt > 150 || this->gRExecIt > 150)
		throw Form::GradeTooLowException();
	this->isSigned = false;
}

Form::Form(const Form &form) : gRSignIt(form.getGRSignIt()), gRExecIt(form.getGRExecIt())
{
	*this = form;
}

Form& Form::operator=(const Form& form)
{
	this->isSigned = form.isSigned;
	return (*this);
}

Form::~Form(){}

std::string	Form::getName() const
{
	return (this->name);
}

bool		Form::getIsSigned() const
{
	return (this->isSigned);
}

int			Form::getGRSignIt() const
{
	return (this->gRSignIt);
}

int			Form::getGRExecIt() const
{
	return (this->gRExecIt);
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGRSignIt())
		throw GradeTooLowException();
	if (bureaucrat.getGrade() <= this->getGRSignIt())
		this->isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	std::string iSSigned;
	if (form.getIsSigned())
		iSSigned = " is signed ,";
	else
		iSSigned = " is not signed yet ,";
	os << form.getName() << iSSigned 
		<< " grade required to sign: " << form.getGRSignIt()
		<< ", grade required to execute: " << form.getGRExecIt()
		<< " .\n";
	return (os);
}