/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:48:04 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 16:22:21 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

std::string	readwrite(std::string prompt)
{
	std::string write;

	std::cout << prompt;
	std::getline(std::cin, write);
	return (write);
}


int main()
{
    int			index;
    Phonebook	pBook;
	Contact		contact;
	std::string	write;
	std::string	word[5];	

    index = 0;
	std::cout << "<<< welcome to Phonebook app >>>" << std::endl;
	std::cout << "choose one of the option: "<< " ADD " << " SEARCH " << " EXIT " << std::endl;
	while (1)
	{	
		std::cout << "> ";
		std::getline(std::cin,write);
		if (!std::cin.good())
			break;
		if (index == 8)
			index = 0;
		if (!write.compare("ADD"))
		{
			word[0]= readwrite("add first name: ");
			word[1]= readwrite("add last name : ");
			word[2]= readwrite("add nick name : ");
			word[3]= readwrite("add phone number : ");
			word[4]= readwrite("add darkest secret : ");
			for(int x = 0 ; x < 5 ; x++)
				word[x] = contact.filterWord(word[x]);
			if (word[0].length() && word[1].length() && word[2].length() && word[3].length() && word[4].length())
			{
				contact.setContact(word);
				pBook.addContact(index, contact);
				index++;
			}
		}
		else if(!write.compare("SEARCH"))
		{
			std::cout << "index of the contact : ";
			std::getline(std::cin,write);
			int index = std::atoi(write.c_str());
			if(index < 8)
			{
				if(pBook.checkIndex(index))
					pBook.displayContact(index);
				else
					std::cout << "the contact index are NULL\n";
			}
			else
				std::cout << "the index is limited to 8 contact !!!\n";
		}
		else if(!write.compare("EXIT"))
			break;
		word->clear();
	}
    return (0);
}
