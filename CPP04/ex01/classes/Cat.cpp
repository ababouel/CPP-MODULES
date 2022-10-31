/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:15 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/31 17:51:26 by abdelghani       ###   ########.fr       */
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
	std::cout << "   Meow Meow Meow!!!\n";
}