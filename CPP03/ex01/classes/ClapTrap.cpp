/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:50:37 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/14 19:01:06 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap() : name(0),htPoints(0),enPoints(0),atDamage(0)
{
    std::cout << "ClapTrap created !!!" << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : name(name), htPoints(10), enPoints(10), atDamage(0)
{
    std::cout << "ClapTrap created : "<< this->name << std::endl; 
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
    std::cout << "ClapTrap Killed: " << name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->htPoints > 0 && this->enPoints > 0)
    {
        this->enPoints--;
        std::cout <<  this->name << " : attacks "<< target <<" , causing "<< this->atDamage <<" points of damage!"<< std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->enPoints > 0 && this->htPoints > 0)
    {
        if(amount <= this->htPoints)
        {
            this->htPoints -= amount;
            std::cout << this->name << " : takeDamage "<< amount <<" , left "<< this->htPoints << " hitpoint " << std::endl;
        }
        else
            this->htPoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->enPoints > 0 && this->htPoints > 0)
    {
        this->enPoints--;
        this->htPoints += amount;
        std::cout << this->name << " : beRepaired "<< amount << " , left "<< this->htPoints << " hitpoint " << std::endl;
    }
}