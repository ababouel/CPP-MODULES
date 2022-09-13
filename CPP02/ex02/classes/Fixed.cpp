/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:20:20 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/12 19:40:17 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::nOFBits = 8;

Fixed::Fixed(void) : pointFix(0) 
{
    std::cout << "Default constructor called\n";
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

Fixed::Fixed(int const nInt) 
{
    std::cout << "Int constructor called\n";
    this->pointFix = nInt << nOFBits; 
}

Fixed::Fixed(float const nfloat)
{
    std::cout << "Float constructor called\n";
    this->pointFix = roundf( nfloat * (1 << this->nOFBits));
}

int Fixed::getRawBits(void) const
{
    return (this->pointFix);
}

void Fixed::setRawBits(int const raw)
{
    this->pointFix = raw; 
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called\n";
    this->pointFix = fixed.getRawBits();
    return (*this);
}

float   Fixed::toFloat(void) const
{
    return ((float)this->pointFix / (float)(1 << this->nOFBits));
}
int     Fixed::toInt(void) const
{
    return (this->pointFix >> this->nOFBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)
{
    os << fix.toFloat();
    return (os);
}
