/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:24:22 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 23:30:14 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"

Form::GradeTooHighException::GradeTooHighException(std::string name) throw() : name(name){}
Form::GradeTooHighException::~GradeTooHighException() throw(){}
const char* Form::GradeTooHighException::what() const throw()
{
        std::string str = this->name + " grade is too high!!!";
        return (str.c_str());
}

Form::GradeTooLowException::GradeTooLowException(std::string name) throw() : name(name){}
Form::GradeTooLowException::~GradeTooLowException() throw(){}
const char* Form::GradeTooLowException::what() const throw()
{
        std::string str = this->name + " grade is too low!!!";
        return (str.c_str());
}

Form::Form(std::string const name, bool isSigned, int const gRSignIt, int const gRExecIt) : name(name), isSigned(isSigned), gRSignIt(gRSignIt), gRExecIt(gRExecIt)
{
	if (this->name == "")
		throw std::invalid_argument("you must add name and grade ");
	else if (this->gRSignIt < 1 || this->gRExecIt < 1)
		throw Form::GradeTooHighException(this->getName());
	else if (this->gRSignIt > 150 || this->gRExecIt > 150)
		throw Form::GradeTooLowException(this->getName());
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
		throw GradeTooLowException(bureaucrat.getName());
	if (this->isSigned == false && bureaucrat.getGrade() <= this->getGRSignIt())
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