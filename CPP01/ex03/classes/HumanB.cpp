/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:45:03 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/14 02:14:40 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string person) : name(person), weapon(NULL) 
{}

HumanB::~HumanB()
{}

void    HumanB::attack( void ) const
{
    if (this->weapon != NULL)
        std::cout << this->name <<" attacks with their "<< this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}