/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:51:23 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/14 19:01:31 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int main()
{
   ClapTrap *jack = new ClapTrap("Jack");
   ScavTrap *hamid = new ScavTrap("Hamid");
   jack->attack("hamid");
   hamid->takeDamage(0);
   hamid->attack("Jack");
   jack->takeDamage(20);
   jack->beRepaired(100);
   hamid->beRepaired(100);
   hamid->guardGate();
   delete jack;
   delete hamid;
}