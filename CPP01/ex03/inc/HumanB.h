/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:48:22 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 23:04:06 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"

class HumanB
{
    private:
        std::string name;
        Weapon*  weapon;
    public:
        HumanB(std::string person);
        ~HumanB();
        void    attack() const;
        void    setWeapon(Weapon& weapon);
};

#endif