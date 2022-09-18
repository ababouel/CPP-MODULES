/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:42:44 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/18 19:43:08 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    
    public:
        ScavTrap(void);
        ScavTrap(std::string);
        ScavTrap& operator=(const ScavTrap& scavTrap);
        ~ScavTrap();
        void    guardGate(void);
};

#endif