/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:51:23 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/18 23:12:58 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
   ClapTrap jack =  ClapTrap("Jack");
   jack.attack("Hamid");
   jack.takeDamage(5);
   jack.beRepaired(100);
   ScavTrap hamid = ScavTrap("Hamid");
   hamid.attack("Jack");
   hamid.beRepaired(200);
   hamid.takeDamage(5);
   hamid.guardGate();
   FragTrap hassan = FragTrap("Hassan");
   hassan.attack("hamid");
   hassan.beRepaired(300);
   hassan.takeDamage(30);
   hassan.highFivesGuys();
}