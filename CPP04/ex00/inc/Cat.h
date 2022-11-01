/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:23 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 11:03:28 by ababouel         ###   ########.fr       */
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
        ~Cat();

        void makeSound() const;
};

#endif