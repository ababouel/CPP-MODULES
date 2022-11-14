/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:03:47 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/14 18:45:09 by ababouel         ###   ########.fr       */
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

void ScavTrap::attack(const std::string& target)
{
    if (this->htPoints > 0 && this->enPoints > 0)
    {
        this->enPoints--;
        std::cout << "ScavTrap "<< this->name << " : attacks "<< target <<" , causing "<< this->atDamage <<" points of damage!!!"<< std::endl;
    }
}

void    ScavTrap::guardGate()
{
    if (this->htPoints > 0 && this->enPoints > 0)
        std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
