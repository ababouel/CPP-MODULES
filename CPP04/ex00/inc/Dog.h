/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:28 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 11:02:52 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H 
# define DOG_H 

# include "Animal.h"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &cat);
        Dog& operator=(const Dog &cat);
        ~Dog();

        void makeSound() const;
};

#endif