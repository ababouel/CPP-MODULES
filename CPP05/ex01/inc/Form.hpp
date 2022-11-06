/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:59:16 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/06 16:16:31 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.h"

class Form
{
	private:
		std::string const	name;
		bool				isSigned;
		int	const			gRSignIt;
		int	const			gRExecIt;
		
	public:
		Form(std::string const name="", bool isSigned=false, int const gRSignIt=0, int const gRExecIt=0);
		Form(const Form &form);
		Form& operator=(const Form	&form);
		~Form();
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGRSignIt() const;
		int			getGRExecIt() const;
		void		beSigned(Bureaucrat &bureaucrat);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif