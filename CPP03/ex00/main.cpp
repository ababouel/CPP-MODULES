/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:51:23 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/17 06:30:46 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main()
{
   ClapTrap jack =  ClapTrap("jack");
   jack.attack("hamid");
   jack.takeDamage(5);
   jack.beRepaired(100);
}