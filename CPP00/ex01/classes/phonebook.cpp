/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:29:14 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/10 01:55:02 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


Phonebook::Phonebook(void){
    std::cout << "construct phonebook Called " << std::endl;
    return ;
}

Phonebook::~Phonebook(void) {
    std::cout << "Destructed phonebook Called " << std::endl;
    return ;
}


void Phonebook::addContact(int index, Contact person)
{
    this->index = index;
    this->contacts[index] = person; 
}

void    Phonebook::displayContact(int index) const
{
    std::cout << "  index   |";
    std::cout << "firstname |";
    std::cout << " lastname |";
    std::cout << " nickname |" << std::endl;
    std::cout << index << std::setw(10) << "|";
    std::cout << this->contacts[index].getFirstName() << std::setw(4) << "|";
    std::cout << this->contacts[index].getLastName() << std::setw(3) << "|";
    std::cout << this->contacts[index].getNickName() << std::setw(6) << "|" << std::endl;
}