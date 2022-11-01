/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:26:45 by abdelghani        #+#    #+#             */
/*   Updated: 2022/11/01 18:08:36 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.h"
#include "inc/Dog.h"

int main()
{
	const AAnimal *dog = new Cat();
	const AAnimal *cat = new Dog();
	std::cout << "\n";
	dog->makeSound();
	cat->makeSound();
	std::cout << "\n";
	delete dog;
	delete cat;

	return (0);
}