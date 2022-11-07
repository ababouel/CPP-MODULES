/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:05:05 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/07 13:36:12 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.h"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
	std::cout << " "<<this->type <<" Default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &cat)
{
	*this = cat;
}

WrongCat&	WrongCat::operator=(const WrongCat &cat)
{
	this->type = cat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << " " << this->type << " Destructor called\n";
}

void WrongCat::makeSound() const 
{
	std::cout << "  Moof Moof Moof!!!\n";
}