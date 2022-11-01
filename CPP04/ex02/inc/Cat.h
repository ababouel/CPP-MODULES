/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:23 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 18:09:15 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "AAnimal.h"
# include "Brain.h"

class Cat : public AAnimal
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