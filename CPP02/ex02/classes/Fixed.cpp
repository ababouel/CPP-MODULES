/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:20:20 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/14 00:27:17 by ababouel         ###   ########.fr       */
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

bool    Fixed::operator <(const Fixed &fixed)
{
    return (this->pointFix < fixed.pointFix ? true : false);
}

bool    Fixed::operator >(const Fixed &fixed)
{
    return (this->pointFix > fixed.pointFix ? true : false);
}

bool    Fixed::operator <=(const Fixed &fixed)
{
    return (this->pointFix <= fixed.pointFix ? true : false);
}

bool    Fixed::operator >=(const Fixed &fixed)
{
    return (this->pointFix >= fixed.pointFix ? true : false);
}

bool    Fixed::operator !=(const Fixed &fixed)
{
    return (this->pointFix != fixed.pointFix ? true : false);
}

bool    Fixed::operator ==(const Fixed &fixed)
{
    return (this->pointFix == fixed.pointFix ? true : false);
}

Fixed&  Fixed::operator +(const Fixed &fixed)
{
    this->pointFix = this->pointFix + fixed.pointFix;
    return (*this);
}

Fixed&  Fixed::operator -(const Fixed &fixed)
{
    this->pointFix = this->pointFix - fixed.pointFix;
    return (*this);
}

Fixed&  Fixed::operator *(const Fixed &fixed)
{
    this->pointFix = this->pointFix * fixed.pointFix;
    return (*this);
}

Fixed&  Fixed::operator /(const Fixed &fixed)
{
    this->pointFix = this->pointFix / fixed.pointFix;
    return (*this);
}

Fixed&  Fixed::operator ++()
{
    ++this->pointFix;
    return (*this);
}

Fixed&  Fixed::operator ++(int)
{
    this->pointFix++;
    return (*this);
}

Fixed&  Fixed::operator --()
{
    --this->pointFix;
    return (*this);
}

Fixed&  Fixed::operator --(int)
{
    this->pointFix--;
    return (*this);
}

Fixed& Fixed::min(Fixed& fx0, Fixed &fx1)
{
    return (fx0.pointFix > fx1.pointFix ? fx1 : fx0);
}

Fixed& Fixed::max(Fixed& fx0, Fixed &fx1)
{
    return (fx0.pointFix > fx1.pointFix ? fx0 : fx1);
}

Fixed& Fixed::min(const Fixed& fx0, const Fixed &fx1)
{
    Fixed fix = Fixed();
    fix = fx0.pointFix > fx1.pointFix ? fx1.pointFix : fx0.pointFix;
    return (fix);
}

Fixed& Fixed::max(const Fixed& fx0, const Fixed &fx1)
{
    Fixed fix;
    fix = fx0.pointFix > fx1.pointFix ? fx0.pointFix : fx1.pointFix;
    return (fix);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)
{
    os << fix.toFloat();
    return (os);
}
