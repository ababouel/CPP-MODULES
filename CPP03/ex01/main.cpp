/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:51:23 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/19 21:47:33 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int main()
{
   ClapTrap *jack = new ClapTrap("Jack");
   ClapTrap *hamid = new ScavTrap("Hamid");
   jack->attack("hamid");
   hamid->takeDamage(0);
   hamid->attack("Jack");
   jack->takeDamage(20);
   jack->beRepaired(100);
   hamid->beRepaired(100); 
   delete hamid;
   delete jack;
}