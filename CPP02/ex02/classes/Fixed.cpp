/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:20:20 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/14 06:50:54 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::nOFBits = 8;

Fixed::Fixed(void) : pointFix(0) 
{
    // std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed)
{
    // std::cout << "Copy constructor called \n";
    *this = fixed;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called\n";
}

Fixed::Fixed(int const nInt) 
{
    // std::cout << "Int constructor called\n";
    this->pointFix = nInt << nOFBits; 
}

Fixed::Fixed(float const nfloat)
{
    // std::cout << "Float constructor called\n";
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
    // std::cout << "Copy assignment operator called\n";
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

Fixed  Fixed::operator +(const Fixed &fx0)
{
    float number = this->toFloat() + fx0.toFloat();
    Fixed fix = Fixed(number);
    return (fix); 
}

Fixed  Fixed::operator -(const Fixed &fx0)
{
    float number = this->toFloat() - fx0.toFloat();
    Fixed fix = Fixed(number);
    return (fix); 
}

Fixed  Fixed::operator *(const Fixed &fx0)
{
   float number = this->toFloat() * fx0.toFloat();
   Fixed fix = Fixed(number);
   return (fix); 
}

Fixed  Fixed::operator /(const Fixed &fx0)
{
   float number = this->toFloat() / fx0.toFloat();
   Fixed fix = Fixed(number);
   return (fix); 
}

Fixed&  Fixed::operator ++()
{
    ++this->pointFix;
    return (*this);
}

Fixed&  Fixed::operator ++(int)
{
    Fixed* fix = new Fixed();
    fix->pointFix = this->pointFix;
    this->pointFix += this->pointFix;
    return (*fix);
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
    Fixed *fix = new Fixed();
    if(fx0.pointFix > fx1.pointFix)
        *fix = fx1;
    else
        *fix = fx0;
    return (*fix);
}

Fixed& Fixed::max(const Fixed& fx0, const Fixed& fx1)
{
    Fixed *fix = new Fixed();
    if(fx0.pointFix > fx1.pointFix)
        *fix = fx0;
    else
        *fix = fx1;
    return (*fix);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)
{
    os << fix.toFloat();
    return (os);
}
