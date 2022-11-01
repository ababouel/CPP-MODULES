/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:26:45 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 13:05:13 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.h"
#include "inc/Dog.h"

int main()
{
	const Animal *animals[6];
	for	(int i = 0; i < 3; i++)
	{
		if (i < 3)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "\n";
	std::cout << "<============================>\n";
	std::cout << "<============================>\n";
	std::cout << "<============================>\n";
	std::cout << "\n";
	for (int i = 0; i < 3; i++)
		delete animals[i];
	return (0);
}