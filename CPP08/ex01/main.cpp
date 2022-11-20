/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:43:24 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/20 05:51:22 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		Span sp2 = Span(10);
		srand (time(NULL));
		int randArray[10];
		for(int i=0; i<10; i++)
		{
			randArray[i]=rand()%100;
			std::cout << "=> " << randArray[i] << "\n";
		}
		sp2.addListNumbers(randArray, 10);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::out_of_range e)
	{
		std::cout << e.what() << "\n";
	}
	return (0);
}