/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:01:33 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/18 23:07:17 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap(){}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->atDamage = 30;
    this->enPoints = 100;
    this->htPoints = 100; 
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
    this->name = frag.name;
    this->enPoints = frag.enPoints;
    this->htPoints = frag.htPoints;
    this->atDamage = frag.atDamage;
    return (*this);
}

FragTrap::~FragTrap() {}

void    FragTrap::highFivesGuys()
{
    std::cout << "give me i high five !!!!" << std::endl;
}