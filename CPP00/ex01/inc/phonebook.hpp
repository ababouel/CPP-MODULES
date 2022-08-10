/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:31:43 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/10 01:24:47 by ababouel         ###   ########.fr       */
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

    void	addContact(int index, Contact person);
	void	displayContact(int index) const;	
};

#endif