/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:25:01 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 14:37:23 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedL.h"

SedL::SedL(std::string s1, std::string s2, std::string name) : s1(s1), s2(s2), name(name){}

SedL::~SedL(){}

void SedL::ft_replace(std::ifstream &filename)
{
    std::string swap;
    std::string swap2;
    this->ofile = ft_crfile(name);
    while (std::getline(filename, swap))
    {
        data.append(swap);
        data.append("\n");
    }
    if (!data.empty())
        data.erase(data.length() - 1);
    for (size_t x = 0; x < data.length(); x++)
    {
        if (data.substr(x).length() >= s2.length() && data.substr(x,s1.length()).compare(s1) == 0)
        {
            swap = data.substr(0,x);
            for (size_t y = 0; y < s1.length(); y++)
                x++;
            swap2 = data.substr(x);
            data.clear();
            data = swap + s2 + swap2; 
        }
    }
    *ofile << data;
    ofile->close();
}



int SedL::ft_errorfile()
{
    std::cout << "Error : name of the file doesn't exist !!!" << std::endl;
    return(1);
} 

std::ofstream* SedL::ft_crfile(std::string filename)
{
    std::string rep(".replace");
    filename.append(rep);
    std::ofstream* ofile = new std::ofstream;
    ofile->open(filename, std::ios::out);
    return (ofile);
}