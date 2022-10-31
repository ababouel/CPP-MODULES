/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:26:45 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/31 18:17:40 by abdelghani       ###   ########.fr       */
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
    delete meta;
    delete i; 
    delete j; 
}