/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:48:22 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 23:08:32 by ababouel         ###   ########.fr       */
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
        Weapon  weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack() const;
        void    setweapon(Weapon weapon);
};

#endif