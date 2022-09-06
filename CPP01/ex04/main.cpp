/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:54:59 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/06 21:06:20 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedL.h"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream ins;
        ins.open(av[1], std::ios::in);
        SedL sedl = SedL(av[2], av[3], av[1]);
        if (!ins.is_open())
            return (sedl.ft_errorfile());
        sedl.ft_replace(ins);
    }
    else
        std::cout << "error : please put 3 args !!!"<< std::endl;
    return (0);
}
