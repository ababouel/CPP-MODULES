/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:20:30 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/13 18:54:10 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int pointFix;
        static const int nOFBits; 
    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        Fixed& operator=(const Fixed &fixed);
        ~Fixed();

        Fixed(int const nInt);
        Fixed(float const nfloat);

        bool    operator <(const Fixed &fixed);
        bool    operator >(const Fixed &fixed);
        bool    operator >=(const Fixed &fixed);
        bool    operator <=(const Fixed &fixed);
        bool    operator !=(const Fixed &fixed);
        bool    operator ==(const Fixed &fixed);

        Fixed&  operator +(const Fixed &fixed);
        Fixed&  operator -(const Fixed &fixed);
        Fixed&  operator *(const Fixed &fixed);
        Fixed&  operator /(const Fixed &fixed);

        Fixed&  operator ++();
        Fixed&  operator ++(int);
        Fixed&  operator --();
        Fixed&  operator --(int);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
        static Fixed& min(Fixed &fx0, Fixed &fx1);
        static Fixed& min(const Fixed &fx0, const Fixed &fx1);
        static Fixed& max( Fixed &fx0,  Fixed &fx1);
        static Fixed& max(const Fixed &fx0, const Fixed &fx1);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif