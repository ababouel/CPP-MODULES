/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:25:01 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/01 13:40:32 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedL.h"

SedL::SedL(void){}

SedL::~SedL(){}

void SedL::ft_replace(std::fstream *filename)
{
    (void)filename;
    std::string data;
    ft_crfile(name);
    filename->read(data, filename->tellg());  
}
int SedL::ft_errorfile()
{
    std::cout << "Error : name of the file doesn't exist !!!" << std::endl;
    return(1);
}
void SedL::setS2(std::string s2)
{
    this->s2 = s2;
}
void SedL::setS1(std::string s1)
{
    this->s1 = s1;
}
void SedL::setName(std::string name)
{
    this->name = name;
} 
std::fstream SedL::ft_crfile(std::string filename)
{
    std::string rep(".replace");
    std::fstream ofile;

    filename.append(rep);
    ofile.open(filename,std::fstream::out);
    return (ofile);
}