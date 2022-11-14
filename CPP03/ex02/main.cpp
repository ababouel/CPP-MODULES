/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:51:23 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/14 18:41:39 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
   // ClapTrap jack =  ClapTrap("Jack");
   // ScavTrap hamid = ScavTrap("Hamid");
   // FragTrap hassan = FragTrap("Hassan");
   // jack.attack("Hamid");
   // jack.takeDamage(5);
   // jack.beRepaired(100);

   // hamid.attack("Jack");
   // hamid.beRepaired(200);
   // hamid.takeDamage(5);
   // hamid.guardGate();
   
   // hassan.attack("hamid");
   // hassan.beRepaired(300);
   // hassan.takeDamage(30);
   // hassan.highFivesGuys();
   ClapTrap *jack =  new ClapTrap("Jack");
   ScavTrap *hamid = new ScavTrap("Hamid");
   FragTrap *hassan = new FragTrap("Hassan");
   
   jack->attack("Hamid");
   jack->takeDamage(5);
   jack->beRepaired(100);

   hamid->attack("Jack");
   hamid->beRepaired(200);
   hamid->takeDamage(5);
   hamid->guardGate();
   
   hassan->attack("hamid");
   hassan->beRepaired(300);
   hassan->takeDamage(30);
   hassan->highFivesGuys();
   
   delete jack;
   delete hassan;
   delete hamid;
}