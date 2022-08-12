/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:29:14 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/12 05:58:23 by ababouel         ###   ########.fr       */
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
    std::cout << "  index  |"<< "firstname|";
    std::cout << "lastname |" << "nickname |" << std::endl;
    std::cout << "  " << index << std::setw(10 - 3) << "|";
    std::cout << this->contacts[index].getFirstName() << std::setw(10 - this->contacts[index].getFirstName().length()) <<  "|";
    std::cout << this->contacts[index].getLastName() << std::setw(10 - this->contacts[index].getLastName().length()) << "|";
    std::cout << this->contacts[index].getNickName() << std::setw(10 - this->contacts[index].getNickName().length()) << "|" << std::endl;
}