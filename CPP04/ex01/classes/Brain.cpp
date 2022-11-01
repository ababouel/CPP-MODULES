/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:23:07 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/01 12:05:43 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = "Brain\n";
	std::cout << "  Brain constructor called\n";
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
}

Brain&	Brain::operator=(const Brain &animal)
{
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = animal.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "  Brain Destructor called\n";
}