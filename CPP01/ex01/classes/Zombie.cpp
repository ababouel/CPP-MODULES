/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:10:07 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 21:58:38 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(void)
{}
Zombie::Zombie(std::string name)
{ 
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": zombie detroyed" << std::endl;
}

void    Zombie::announce( void ) const
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
