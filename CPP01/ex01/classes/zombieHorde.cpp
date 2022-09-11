/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:04:45 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/11 20:04:06 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie zombie = Zombie(name);
    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N ; i++)
        zombies[i] = zombie; 
    return (zombies);    
}