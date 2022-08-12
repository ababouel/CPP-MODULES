/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:29:43 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/12 06:13:18 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
    // std::cout << "construct Contact Called " << std::endl;
    return ;
}

Contact::~Contact(void) {
    // std::cout << "Destructed Contact Called " << std::endl;
    return ;
}

void Contact::setContact(std::string frstname, std::string lstname, std::string nckname, std::string phnumber, std::string darkSecret)
{
    std::string fname = frstname.substr(0,9);
    std::string lname = lstname.substr(0,9);
    std::string ncname = nckname.substr(0,9);
    fname.replace(8,9,".");
    lname.replace(8,9,".");
    ncname.replace(8,9,".");
    this->firstName = fname;
    this->lastName = lname;
    this->nickName = ncname;
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