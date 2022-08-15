/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:48:22 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/15 17:07:48 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
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