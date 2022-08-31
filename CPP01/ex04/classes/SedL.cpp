/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:25:01 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/30 16:11:10 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedL.h"

SedL::SedL(void){}

SedL::~SedL(){}

void SedL::ft_replace(std::ifstream *filename, std::string s1, std::string s2)
{
    (void)filename;
    (void)s1;
    (void)s2;
}

int SedL::ft_errorfile()
{
    std::cout << "Error : name of the file doesn't exist !!!" << std::endl;
    return(1);
}

std::fstream SedL::ft_crfile(std::string filename)
{
    std::string rep(".replace");
    std::fstream ofile;

    filename.append(rep);
    ofile.open(filename,std::fstream::out);
    return (ofile);
}