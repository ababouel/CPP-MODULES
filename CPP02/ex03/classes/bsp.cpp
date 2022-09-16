/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:55:51 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/16 23:55:54 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

float     clArea(Point x, Point y, Point z)
{
    float area = (float) x.getPointX().toFloat() * (float) (y.getPointY().toFloat() - z.getPointY().toFloat()) 
        + (float) y.getPointX().toFloat() * (float) (z.getPointY().toFloat() - x.getPointY().toFloat()) 
        + (float) z.getPointX().toFloat() * (float) (x.getPointY().toFloat() - y.getPointY().toFloat());
    if (area < 0)
        return (-1 * area * 0.5);
    return (area * 0.5);
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