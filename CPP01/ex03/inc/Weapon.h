/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:09:58 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/14 22:56:58 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon( void );
        ~Weapon();
        std::string getType() const;
        void        setType(std::string type);        
};

#endif