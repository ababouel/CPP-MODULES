/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:44:56 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 23:26:24 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string tp)
{
    this->type = type;
}

Weapon::~Weapon()
{
    
}

std::string Weapon::getType(void) const
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}