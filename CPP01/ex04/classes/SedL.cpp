/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:25:01 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/06 13:19:31 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedL.h"

SedL::SedL(std::string s1, std::string s2, std::string name) : s1(s1), s2(s2), name(name){}

SedL::~SedL(){}

void SedL::ft_replace(std::ifstream &filename)
{
    (void)filename;
    std::string swap;
    std::string swap2;
    this->ofile = ft_crfile(name);
    while (std::getline(filename, swap))
    {
        swap2.append(swap);
        swap2.append("\n");
    }
    for (int x; x < swap2.length(); x = 0 )
    {
        if (swap2.substr(x,s1.length()).compare(s1) == 0)
        {

        }
    }
    *ofile << swap2;
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