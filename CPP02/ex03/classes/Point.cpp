/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:56:14 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/16 23:42:46 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point(void) : x(0) , y(0) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)){}


Point::Point(const Point& point): x(point.x),y(point.y){}

Point& Point::operator=(Point &point)
{
    (Fixed)this->x = point.getPointX();
    (Fixed)this->y = point.getPointY();
    return (*this); 
}

Point::~Point(){}

Fixed& Point::getPointX(void) const
{
    return ((Fixed&)this->x); 
}

Fixed& Point::getPointY(void) const
{
    return ((Fixed&)this->y);
}
