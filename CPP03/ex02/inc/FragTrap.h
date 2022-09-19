/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:56:58 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/19 18:49:42 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"

class FragTrap : public ClapTrap
{
   public:
        FragTrap(void);
        FragTrap(std::string);
        FragTrap& operator=(const FragTrap& fragTrap);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif


