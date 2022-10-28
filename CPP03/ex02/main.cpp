/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:51:23 by ababouel          #+#    #+#             */
/*   Updated: 2022/10/28 13:00:24 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
   ClapTrap jack =  ClapTrap("Jack");
   ScavTrap hamid = ScavTrap("Hamid");
   FragTrap hassan = FragTrap("Hassan");
   jack.attack("Hamid");
   jack.takeDamage(5);
   jack.beRepaired(100);

   hamid.attack("Jack");
   hamid.beRepaired(200);
   hamid.takeDamage(5);
   hamid.guardGate();
   
   hassan.attack("hamid");
   hassan.beRepaired(300);
   hassan.takeDamage(30);
   hassan.highFivesGuys();
}