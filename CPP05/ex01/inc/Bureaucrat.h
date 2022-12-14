/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:36:10 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 23:25:47 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;
	public:
		Bureaucrat(std::string const name="", int grade=0);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat& operator=(const Bureaucrat& bureaucrat);
		~Bureaucrat();
	
		class GradeTooHighException : public std::exception
		{
			private:
				std::string name;
			public:
				GradeTooHighException(std::string name) throw();
				~GradeTooHighException() throw();
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				std::string name;
			public:
				GradeTooLowException(std::string name) throw();
				~GradeTooLowException() throw();
				const char* what() const throw();
		};
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
