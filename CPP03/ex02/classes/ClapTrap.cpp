/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:50:37 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/19 21:56:17 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap() : name(0),htPoints(0),enPoints(0),atDamage(0){}

ClapTrap::ClapTrap(std::string name) : name(name), htPoints(10), enPoints(10), atDamage(0)
{
    std::cout << " created: " << name << std::endl; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
    this->name = clapTrap.name;
    this->enPoints = clapTrap.enPoints;
    this->htPoints = clapTrap.htPoints;
    this->atDamage = clapTrap.atDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Player Killed: " << name << std::endl; 
}

void ClapTrap::attack(const std::string& target)
{
    if (this->htPoints > 0 && this->enPoints > 0)
    {
        this->enPoints--;
        std::cout << "ClapTrap "<< this->name << " attacks "<< target <<" , causing "<< this->atDamage <<" points of damage!"<< std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount <= this->htPoints)
        this->htPoints -= amount;
    else
        this->htPoints = 0;
        std::cout << "ClapTrap "<< this->name << " takeDamage "<< amount <<" , left "<< this->htPoints << " hitpoint " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->enPoints > 0)
    {
        this->enPoints--;
        this->htPoints += amount;
        std::cout << "ClapTrap "<< this->name << " beRepaired "<< amount << " , left "<< this->htPoints << " hitpoint " << std::endl;
    }
}