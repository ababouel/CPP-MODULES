/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:57:25 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/01 13:28:32 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDL_H
# define SEDL_H

#include <iostream>
#include <fstream>
#include <string>
class SedL
{
    private:
        std::string s1;
        std::string s2;
        std::string name;
    public:
        SedL(void);
        ~SedL();
        int ft_errorfile();     
        void setS2(std::string s2);
        void setS1(std::string s1);
        void setName(std::string name); 
        void ft_replace(std::fstream *filename);
        std::fstream ft_crfile(std::string filename);
};

#endif