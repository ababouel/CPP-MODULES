/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:23 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/31 18:16:52 by abdelghani       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(const Cat &cat);
        Cat& operator=(const Cat &cat);
        virtual ~Cat();

        void makeSound() const;
};

#endif