/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:45:14 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/14 01:57:52 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{}

HumanA::~HumanA(void)
{}

void    HumanA::attack(void) const
{
   std::cout << this->name <<" attacks with their "<< this->weapon.getType() << std::endl; 
}