/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:20 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/11 17:15:46 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(void);
        AAnimal(const AAnimal &animal);
        AAnimal& operator=(const AAnimal& animal);
        virtual ~AAnimal();
		
		virtual void	makeSound() const = 0;
};

#endif