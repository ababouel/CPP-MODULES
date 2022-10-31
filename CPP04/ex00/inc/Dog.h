/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:28 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/31 17:43:09 by abdelghani       ###   ########.fr       */
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
        virtual ~Dog();

        void makeSound() const;
};

#endif