/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:57:25 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/06 12:35:19 by ababouel         ###   ########.fr       */
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
        std::ofstream *ofile;
    public:
        SedL(std::string s1, std::string s2, std::string name);
        ~SedL();
        int ft_errorfile(); 
        void ft_replace(std::ifstream &filename);
        std::ofstream* ft_crfile(std::string filename);
};

#endif