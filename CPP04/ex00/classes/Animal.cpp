/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:04:46 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 11:19:40 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.h"

Animal::Animal() : type("Animal") 
{
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
}

Animal&	Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

void Animal::makeSound() const 
{
	std::cout << "  " <<this->type << " Default sound\n";
}

std::string		Animal::getType() const
{
	return (this->type);
}