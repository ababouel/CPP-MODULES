/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:19:39 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/16 23:56:32 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int main()
{
    Point const  pA =  Point(0 , 0);
    Point const pB = Point(10 , 10);
    Point const pC =  Point(20 , 0); 
    const Point pPyes = Point(10 , 5);
    std::cout << "pP inside a triangle ABC :\n"<< (bsp(pA, pB, pC, pPyes) ? "True" : "False" ) << std::endl;
    Point pPno = Point(10 , 20);
    std::cout << "pP inside a triangle ABC :\n"<< (bsp(pA, pB, pC, pPno) ? "True" : "False" )<< std::endl;
    
    return (0);    
}