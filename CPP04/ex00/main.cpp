/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:05:54 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 11:18:41 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.h"
#include "inc/Dog.h"

int main()
{
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    std::cout << "  type of animal => "<< i->getType()<< "\n";
    std::cout << "  type of animal => "<< j->getType()<< "\n";
    std::cout << "  type of animal => "<< meta->getType()<< "\n";
    
    delete i; 
    delete j; 
    delete meta;
}