/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:08:52 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/15 15:10:34 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
    private:
        std::string name;
        Weapon&      weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
    void    attack(void) const;
};

#endif