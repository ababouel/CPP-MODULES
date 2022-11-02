/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:54:08 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/28 18:13:02 by abdelghani       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.h"
# include "FragTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap& operator=(const DiamondTrap& DiamondTrap);
        ~DiamondTrap();
        void whoami(void); 
};

#endif