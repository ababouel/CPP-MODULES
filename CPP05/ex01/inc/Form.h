/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:47:09 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/05 19:13:39 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gRSignIt;
		const int			gRExecIt;
		
	public:
		Form(std::string name="", const int gRSignIt=0, const int gRExecIt=0);
		Form(const Form &form);
		Form& operator=(const Form& form);
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
		std::string	getIsSigned() const;
		int			getGRSignIt() const;
		int			getGRExecIt() const;
};

#endif