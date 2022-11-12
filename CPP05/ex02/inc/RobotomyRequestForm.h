/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:47:25 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 16:49:49 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQESTFORM_H
# define ROBOTOMYREQESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target="");
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm& operator=(const RobotomyRequestForm	&form);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const &execute) const;
};

#endif