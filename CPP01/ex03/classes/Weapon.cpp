/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:44:56 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/05 22:24:40 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"


Weapon::Weapon(std::string tp) : type(tp)
{}

Weapon::~Weapon()
{}

const std::string &Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}