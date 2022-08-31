/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:54:59 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/30 16:11:33 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedL.h"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream ins(av[1]);
        std::string s1(av[2]);
        std::string s2(av[3]);

        SedL sedl = SedL();
        if (!ins.is_open())
            return (sedl.ft_errorfile());
        sedl.ft_replace(&ins, s1, s2);
    }
    else
        std::cout << "error : please put 3 args !!!"<< std::endl;
    return (0);
}
