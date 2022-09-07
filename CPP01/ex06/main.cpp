/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:07:34 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 22:39:06 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
    Harl harl;
    if (ac==2)
        harl.complain(av[1]);
    else
        std::cout << "please put one args !!!\n";
    return (0);
}