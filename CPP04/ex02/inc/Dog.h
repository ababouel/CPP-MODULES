/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:28 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 18:09:25 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H 
# define DOG_H 

# include "AAnimal.h"
# include "Brain.h"

class Dog : public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog(void);
        Dog(const Dog &cat);
        Dog& operator=(const Dog &cat);
        virtual ~Dog();

        void makeSound() const;
};

#endif