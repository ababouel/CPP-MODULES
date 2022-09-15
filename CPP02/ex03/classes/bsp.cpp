/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:55:51 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/15 18:48:03 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

float     clArea(Point& x, Point& y, Point& z)
{
    float area = (1 / 2) * 
        ( x.getPointX() * (y.getPointY() - z.getPointY()) 
        + y.getPointX() * (z.getPointY() - x.getPointY())
        + z.getPointX() * (x.getPointY() - y.getPointY()));
    return (area);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    float abc;
    float result;
    abc = clArea(a , b , c);
    result = clArea(a, point, b) + clArea(a, c, point) + clArea(b, c, point);
    if (abc == result)
        return (true);
    else
        return (false);
}