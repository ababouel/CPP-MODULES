/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:01:33 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/14 18:44:29 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap(){}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->atDamage = 30;
    this->enPoints = 100;
    this->htPoints = 100; 
    std::cout << " FragTrap created: " << name << std::endl; 
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
    this->name = frag.name;
    this->enPoints = frag.enPoints;
    this->htPoints = frag.htPoints;
    this->atDamage = frag.atDamage;
    return (*this);
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap Killed: " << name << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->htPoints > 0 && this->enPoints > 0)
    {
        this->enPoints--;
        std::cout << "FragTrap "<< this->name << " : attacks "<< target <<" , causing "<< this->atDamage <<" points of damage!!!"<< std::endl;
    }
}

void    FragTrap::highFivesGuys()
{
   if (this->enPoints > 0 && this->htPoints > 0)
    std::cout << "give me i high five !!!!" << std::endl;
}