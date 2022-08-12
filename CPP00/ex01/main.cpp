/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:48:04 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/12 01:19:59 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
    int			index;
    Contact		contact;
    Phonebook	pBook;
	char		write[1000];	

    index= 0;
	std::cout << "<<< welcome to Phonebook app >>>" << std::endl;
	std::cout << "choose one of the option: "<< " ADD " << " SEARCH " << " EXIT " << std::endl;
	while (1)
	{
		scanf("%s",write);
		if (!strcmp(write, "ADD"))
		{
			contact.setContact("leonard", "de Vinci", "vinci", "06625346","heyyyyyy");
			pBook.addContact(0, contact);
		}
		else if(!strcmp(write, "SEARCH"))
		
			pBook.displayContact(0);
		else if(!strcmp(write, "EXIT"))
			break;
	}
    return (0);
}
