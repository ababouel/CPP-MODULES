/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:17 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/31 18:17:21 by abdelghani       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.h"

Dog::Dog()
{
    this->type = "Dog";
	std::cout << " " <<this->type <<" Default constructor called\n";
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
}

Dog&	Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << " " << this->type << " Destructor called\n";
}

void Dog::makeSound() const 
{
	std::cout << "   Woof Woof Woof!!!\n";
}