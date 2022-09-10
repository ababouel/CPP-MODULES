/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:20:20 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/10 17:42:20 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called\n";
    this->number = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called \n";
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->number);
}

void Fixed::setRawBits(int const raw)
{
    this->number = raw; 
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called\n";
    this->number = fixed.getRawBits();
    return (*this);
}
