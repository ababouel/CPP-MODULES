/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:44:34 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 18:54:36 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.h"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const name="", bool isSigned=false, int const gRSignIt=0, int const gRExecIt=0);
		PresidentialPardonForm(const PresidentialPardonForm &form);
		PresidentialPardonForm& operator=(const PresidentialPardonForm	&form);
		virtual ~PresidentialPardonForm();
		virtual void	execute(Bureaucrat const &execute) const;
};

#endif
