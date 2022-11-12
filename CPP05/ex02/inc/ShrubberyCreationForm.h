/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:24:27 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/12 16:50:15 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string target="");
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm	&form);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const &execute) const;
};

#endif