/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:35:47 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 18:30:24 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The bureaucrat grade is too high!!!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The bureaucrat grade is too low!!!";
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
	if (this->name == "")
		throw std::invalid_argument("you must add name and grade ");
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	int grade;
	grade = this->grade;
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

void	Bureaucrat::decrementGrade()
{
	int grade;
	grade = this->grade;
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void		Bureaucrat::signForm(Form &form)
{
	if (form.getGRSignIt() >= this->getGrade())
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << "\n";
	}
	else
		std::cout << this->getName() << " cannot sign " << form.getName() << " because the bureaucrat's grade is lower than the form's grade to sign.\n";
			
}

void		Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
	std::cout << this->getName() << " executed " << form;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
	return (os);
}