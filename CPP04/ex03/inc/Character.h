/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:43:48 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 19:16:23 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.h"

class Character: public ICharacter
{
	private:
	
	public:
		Character(void);
		Character(const Character &character);
		Character& operator=(const Character &character);
		~Character();
};
#endif