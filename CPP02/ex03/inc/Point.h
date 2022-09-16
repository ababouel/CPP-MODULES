/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:25:39 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/16 23:27:05 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.h"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(void);
        Point(const Point& point);
        Point&  operator=(Point &point);
        Point(const float x, const float y);
        ~Point(); 
        Fixed&  getPointX(void) const;
        Fixed&  getPointY(void) const;
};

bool    bsp( Point a, Point  b, Point  c, Point  point);
float   clArea(Point a, Point b, Point c);

#endif