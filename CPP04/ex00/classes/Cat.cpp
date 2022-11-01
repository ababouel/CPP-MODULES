/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:05:05 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 11:19:02 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.h"

Cat::Cat()
{
    this->type = "Cat";
	std::cout << " "<<this->type <<" Default constructor called\n";
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat&	Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << " " << this->type << " Destructor called\n";
}

void Cat::makeSound() const 
{
	std::cout << "  Meow Meow Meow!!!\n";
}