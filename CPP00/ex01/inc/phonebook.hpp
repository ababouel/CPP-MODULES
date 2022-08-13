/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:31:43 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/13 02:06:19 by ababouel         ###   ########.fr       */
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