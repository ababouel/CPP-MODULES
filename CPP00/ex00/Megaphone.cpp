/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:01:40 by ababouel          #+#    #+#             */
/*   Updated: 2022/08/03 17:34:41 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using namespace std;

void    ft_putstr(char *str)
{
    int     x;
    char    ch;

    x = 0;
    while (str[x])
    {
        ch = toupper(str[x]);
        cout << ch;
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
        cout <<""<< endl;
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return (0);
}