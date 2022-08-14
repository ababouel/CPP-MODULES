/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:10:03 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 19:27:16 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        void    announce( void );
};

Zombie* zombieHorde( int N, std::string name);
 
#endif