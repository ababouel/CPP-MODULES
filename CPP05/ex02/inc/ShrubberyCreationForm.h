/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:24:27 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/11 20:26:30 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "form.h"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const name="", bool isSigned=false, int const gRSignIt=0, int const gRExecIt=0);
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm	&form);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const &execute) const;
};

#endif