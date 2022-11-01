/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:15 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 12:04:31 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.h"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << " "<<this->type <<" constructor called\n";
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat&	Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	this->brain = cat.brain;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << " " << this->type << " Destructor called\n";
}

void Cat::makeSound() const 
{
	std::cout << "   Meow Meow Meow!!!\n";
}