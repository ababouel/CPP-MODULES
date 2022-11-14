/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:03:34 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/14 16:18:01 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
class Intern
{
	private:
		Form* shrubbery(std::string target);
        Form* president(std::string target);
        Form* robotomy(std::string	target);
	public:
		Intern();
		Intern(const Intern &intern);
		Intern& operator=(const Intern	&itern);
		~Intern();
		Form* makeForm(std::string name, std::string target);
};

#endif