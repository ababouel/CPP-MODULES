/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:29:43 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 16:02:45 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void) {}

void Contact::setContact(std::string *word)
{
    this->firstName = word[0];
    this->lastName = word[1];
    this->nickName = word[2];
    this->phoneNumber = word[3];
    this->darkSecret = word[4];
}

std::string Contact::getFirstName(void) const {
    return (this->firstName);
}

std::string Contact::getLastName(void) const {
    return (this->lastName);
}

std::string Contact::getNickName(void) const {
    return (this->nickName);
}

std::string Contact::getPhoneNumber(void) const {
    return (this->phoneNumber);
}

std::string Contact::getDarkSecret(void) const {
    return (this->darkSecret);
}

std::string Contact::filterWord(std::string &word)
{
    std::string fname; 
    if (word.length() > 10 )
    {
        fname = word.substr(0,9);
        fname.replace(8,9,".");
        return (fname);
    }
    return (word);
}