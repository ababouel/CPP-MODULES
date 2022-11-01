/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:06:39 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 18:07:04 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/AAnimal.h"

AAnimal::AAnimal() : type("AAnimal") 
{
	std::cout << "AAnimal Default constructor called\n";
}

AAnimal::AAnimal(const AAnimal &animal)
{
	*this = animal;
}

AAnimal&	AAnimal::operator=(const AAnimal &animal)
{
	this->type = animal.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called\n";
}