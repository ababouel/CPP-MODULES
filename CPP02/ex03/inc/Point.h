/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:25:39 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/14 23:11:09 by ababouel         ###   ########.fr       */
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
        Point(const float x, const float y);
        Point(const Point& point);
        Point& operator=(const Point &point);
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif