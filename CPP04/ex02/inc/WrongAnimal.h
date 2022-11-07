/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:37:19 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/07 13:37:25 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_h
# define WRONGANIMAL_h

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &wrongAnimal);
        WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
        virtual ~WrongAnimal();
        
        std::string		getType() const;
        virtual	void	makeSound() const;
};

#endif