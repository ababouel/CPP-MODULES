/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:08:04 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 18:53:24 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie  zstack = Zombie("helloStack");
    zstack.announce();
    Zombie* zHeap = newZombie("foo");
    zHeap->announce(); 
    randomChump("hey");
    delete zHeap;
    return(0); 
}