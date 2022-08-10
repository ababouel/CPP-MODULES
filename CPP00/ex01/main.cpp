/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:48:04 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/10 01:56:15 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
    Contact contact;
    Phonebook pBook;
    contact.setContact("leonard", "de Vinci", "vinci", "06625346","heyyyyyy");
    pBook.addContact(0, contact);
    pBook.displayContact(0);
    return (0);
}
