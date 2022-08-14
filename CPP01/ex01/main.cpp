/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:08:04 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 19:34:32 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie* zombies = zombieHorde(50,"helloWorld!!!!!");
    for (int i = 0; i < 50; i++)
        zombies[i].announce();
    delete [] zombies;
    return(0); 
}