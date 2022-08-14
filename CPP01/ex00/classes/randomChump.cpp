/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:10:10 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 18:47:20 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void    randomChump(std::string name)
{
    Zombie* zombie = newZombie(name);
    zombie->announce();
    delete zombie;
}