/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:01:40 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/03 20:27:44 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void    ft_putstr(char *str)
{
    int     x;
    char    ch;

    x = 0;
    while (str[x])
    {
        ch = toupper(str[x]);
        std::cout << ch;
        x++;   
    }
}

int main(int ac, char **av)
{
    int x;

    x = 1;
    if (ac > 1)
    {
        while (av[x])
        {
            ft_putstr(av[x]);
            x++;
        }
        std::cout <<""<< std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}