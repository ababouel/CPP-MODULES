/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:31:43 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/12 05:49:40 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class   Phonebook
{
    private:

        Contact	contacts[8];
		int		index;

    public:

        Phonebook(void);
        ~Phonebook(void);

	void	displayContact(int index) const;	
    void    addContact(int index, Contact person);
};

#endif