/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:13:54 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 19:23:41 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "AMateria.h"
# include "IMateriaSource.h"
# include "ICharacter.h"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &mSource);
		MateriaSource& operator=(const MateriaSource &mSource);
		~MateriaSource();
		
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};


#endif