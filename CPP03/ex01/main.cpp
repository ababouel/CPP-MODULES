/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:51:23 by ababouel          #+#    #+#             */
/*   Updated: 2022/10/28 12:59:44 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int main()
{
   ClapTrap jack = ClapTrap("Jack");
   ScavTrap hamid = ScavTrap("Hamid");
   jack.attack("hamid");
   hamid.takeDamage(0);
   hamid.attack("Jack");
   jack.takeDamage(20);
   jack.beRepaired(100);
   hamid.beRepaired(100);
   hamid.guardGate();
}