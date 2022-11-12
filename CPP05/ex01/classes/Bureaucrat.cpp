/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:35:47 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 23:31:26 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string name) throw() : name(name){}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
        std::string str = this->name + " grade is too high!!!";
        return (str.c_str());
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string name) throw() : name(name){}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
        std::string str = this->name + " grade is too low!!!";
        return (str.c_str());
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
	if (this->name == "")
		throw std::invalid_argument("you must add name and grade ");
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException(this->getName());
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException(this->getName());
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
		throw Bureaucrat::GradeTooHighException(this->getName());
	this->grade = grade;
}

void	Bureaucrat::decrementGrade()
{
	int grade;
	grade = this->grade;
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(this->getName());
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
		std::cout << this->getName() << " cannot sign " << form.getName() << " because the bureaucrat's grade is lower than the form's grade.\n";
			
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
	return (os);
}