/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:29:43 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/10 01:48:00 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
    std::cout << "construct Contact Called " << std::endl;
    return ;
}

Contact::~Contact(void) {
    std::cout << "Destructed Contact Called " << std::endl;
    return ;
}

void Contact::setContact(std::string frstname, std::string lstname, std::string nckname, std::string phnumber, std::string darkSecret)
{
    this->firstName = frstname;
    this->lastName = lstname;
    this->nickName = nckname;
    this->phoneNumber = phnumber;
    this->darkSecret = darkSecret;
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