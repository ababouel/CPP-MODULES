/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:45:03 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 23:40:19 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string person)
{
   this->name = person; 
}

HumanB::~HumanB()
{
    
}

void    HumanB::attack() const
{
    std::cout << name <<" attacks with their "<< weapon.getType() << std::endl;
}