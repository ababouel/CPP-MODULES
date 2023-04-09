/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:07:08 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/08 03:02:51by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char* argv[])
{
    if (ac == 2)
    {
        BitcoinExchange btc(argv[1]);
    }
    return (0);
}