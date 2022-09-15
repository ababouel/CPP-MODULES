/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:56:14 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/15 19:43:58 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point(void) : x(0) , y(0) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point& point)
{
    *this = point;    
}

Fixed Point::getpfX(void) 
{   
    this->xp = this->x; 
    return (this->xp);
}

Fixed Point::getpfY(void) const
{
    return (this->y);
}

Point& Point::operator=(const Point &point) const
{
    this->xp = point.getpfX();
    return (*this);
}

Point::~Point(){}

float Point::getPointX(void)
{
    return (this->x.toFloat());
}

float Point::getPointY(void)
{
    return (this->y.toFloat());
}
