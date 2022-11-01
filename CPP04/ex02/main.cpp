/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:26:45 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 13:26:54 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.h"
#include "inc/Dog.h"
#include "Animal.h"

int main()
{
	const Animal *dog = new Cat();
	const Animal *cat = new Dog();
	std::cout << "\n";
	dog->makeSound();
	cat->makeSound();
	std::cout << "\n";
	delete dog;
	delete cat;

	return (0);
}