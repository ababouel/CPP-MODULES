/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:07:31 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 19:06:16 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void); 
    public:
        Harl();
        ~Harl();
       void complain(std::string level); 
        
};

#endif