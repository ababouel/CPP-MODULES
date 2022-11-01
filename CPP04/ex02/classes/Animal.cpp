/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:11 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 13:09:18 by ababouel         ###   ########.fr       */
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