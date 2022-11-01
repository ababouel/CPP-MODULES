/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:18:32 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 19:15:13 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);
		
		AMateria(void);
		AMateria(const AMateria &amateria);
		AMateria& operator=(const AMateria &amateria);
		~AMateria();
		
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif