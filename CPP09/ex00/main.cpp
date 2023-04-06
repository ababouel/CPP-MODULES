/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:07:08 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/06 01:40:25 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char* argv[])
{
    (void) ac;
    (void) argv;

    std::ifstream infile;
    std::ostringstream ss;
    infile.open("data.csv");
    ss << infile.rdbuf();
    std::cout << "Reading from the file" << std::endl;
    std::cout << ss.str() << std::endl;
    return (0);
}