/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedL.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:57:25 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/30 16:11:21 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDL_H
# define SEDL_H

#include <iostream>
#include <fstream>
class SedL
{
    public:
        SedL(void);
        ~SedL();
        void ft_replace(std::ifstream *filename, std::string s1, std::string s2);
        std::fstream ft_crfile(std::string filename);
        int ft_errorfile();     
};

#endif