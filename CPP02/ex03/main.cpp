/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:19:39 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/15 18:44:54 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int main()
{
    Point pA = Point(0 , 0);
    Point pB = Point(10 , 10);
    Point pC = Point(20 , 0);
    Point pPyes = Point(10 , 5);
    std::cout << "pP inside a triangle ABC :"<< bsp(pA, pB, pC, pPyes) << std::endl;
    Point pPno = Point(10 , 20);
    std::cout << "pP inside a triangle ABC :"<< bsp(pA, pB, pC, pPno) << std::endl;
    
    return (0);    
}