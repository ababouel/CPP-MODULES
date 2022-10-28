/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:03:47 by ababouel          #+#    #+#             */
/*   Updated: 2022/10/28 12:52:02 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap(){}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->atDamage = 20;
    this->enPoints = 50;
    this->htPoints = 100; 
	std::cout << " Scavtrap created: " << name << std::endl; 
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
    this->name = scav.name;
    this->enPoints = scav.enPoints;
    this->htPoints = scav.htPoints;
    this->atDamage = scav.atDamage;
    return (*this);
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap Killed: " << name << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
