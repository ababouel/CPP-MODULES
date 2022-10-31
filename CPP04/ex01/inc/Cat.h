/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:23 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/31 17:43:11 by abdelghani       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.h"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &cat);
        Cat& operator=(const Cat &cat);
        virtual ~Cat();

        void makeSound() const;
};

#endif