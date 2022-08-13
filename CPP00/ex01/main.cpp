/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:48:04 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/12 21:12:59 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
    int			index;
    Phonebook	pBook;
	Contact		contact;
	std::string	write;
	std::string	word[5];	

    index= 0;
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
			std::cout << "add first name: ";
			std::getline(std::cin, write);
			word[0] = write;
			std::cout << "add last name : " ;
			std::getline(std::cin, write);
			word[1] = write;
			std::cout << "add nick name : ";
			std::getline(std::cin, write);
			word[2] = write;
			std::cout << "add phone number : ";
			std::getline(std::cin, write);
			word[3] = write;
			std::cout << "add darkest number : ";
			std::getline(std::cin, write);
			word[4] = write;
			if (word[0].size() && word[1].size() && word[2].size() && word[3].size() && word[4].size())
			{
				contact.setContact(word[0],word[1],word[2],word[3], word[4]);
				pBook.addContact(index, contact);
				index++;
			}
		}
		else if(!write.compare("SEARCH"))
		{
			try
			{
				std::cout << "index of the contact : ";
				std::getline(std::cin,write);
				pBook.displayContact(std::stoi(write));
			}
			catch (std::invalid_argument const& ex)
			{
				std::cout << "invalid index" << ex.what() << std::endl;
			}
			catch (std::out_of_range const& ex)
			{
				std::cout << "invalid index" << ex.what() << std::endl;
			}
		}
		else if(!write.compare("EXIT"))
			break;
	}
    return (0);
}
