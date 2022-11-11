/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:47:25 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 20:26:20 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQESTFORM_H
# define ROBOTOMYREQESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const name="", bool isSigned=false, int const gRSignIt=0, int const gRExecIt=0);
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm& operator=(const RobotomyRequestForm	&form);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const &execute) const;
};

#endif