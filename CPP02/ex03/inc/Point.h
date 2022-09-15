/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:25:39 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/15 19:43:45 by ababouel         ###   ########.fr       */
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
        Fixed xp;
        Fixed yp; 
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point& point);
        Point& operator=(const Point &point);
        ~Point();
        Fixed getpfX(void) const;
        Fixed getpfY(void) const;
        float  getPointX(void);
        float  getPointY(void);
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);
float   clArea(Point a, Point b, Point c);

#endif