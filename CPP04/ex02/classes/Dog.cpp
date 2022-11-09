/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:17 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/09 19:19:28 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.h"

Dog::Dog()
{
    this->type = "Dog";
	std::cout << " " <<this->type <<" constructor called\n";
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	this->brain = new Brain();
	*this = dog;
}

Dog&	Dog::operator=(const Dog &dog)
{
	*brain = *dog.brain; 
	this->type = dog.type; 
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << " " << this->type << " Destructor called\n";
}

void Dog::makeSound() const 
{
	std::cout << "   Woof Woof Woof!!!\n";
}