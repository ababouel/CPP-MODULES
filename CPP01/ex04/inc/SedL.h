/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:57:25 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/06 15:50:31 by ababouel         ###   ########.fr       */
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
        std::string data;
        std::ofstream *ofile;
    public:
        SedL(std::string s1, std::string s2, std::string name);
        ~SedL();
        int ft_errorfile(); 
        void ft_replace(std::ifstream &filename);
        std::string& rep(size_t pos, size_t len, const std::string& str);
        std::ofstream* ft_crfile(std::string filename);
};

#endif