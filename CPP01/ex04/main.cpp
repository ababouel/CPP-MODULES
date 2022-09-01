/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:54:59 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/01 13:38:21 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedL.h"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::fstream ins;
        ins.open(av[1], std::fstream::in);
        SedL sedl = SedL();
        if (!ins.is_open())
            return (sedl.ft_errorfile());
        sedl.setName(av[1]);
        sedl.setS1(av[2]);
        sedl.setS2(av[3]);
        sedl.ft_replace(&ins);
    }
    else
        std::cout << "error : please put 3 args !!!"<< std::endl;
    return (0);
}
