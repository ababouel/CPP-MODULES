/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:05:26 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 11:19:08 by ababouel         ###   ########.fr       */
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
	std::cout << "  Woof Woof Woof!!!\n";
}