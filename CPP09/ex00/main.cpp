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
    try {
        if (ac != 2)
            throw std::invalid_argument("Error: could not open file.\n"); 
        BitcoinExchange btc(argv[1]);
        btc.showResult();
    } 
    catch( std::exception& e) {
        std::cerr << e.what();
    }
    return (0);
}