/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:28:38 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/06 03:16:50 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string ss)
{
    std::string str;
    this->input.open(ss);
    this->data.open("data.csv");
    while (std::getline(std::cin, str))
    {
        std::strtok((char *)str.c_str(), ",");
        str.clear();
    }
}

BitcoinExchange::~BitcoinExchange()
{
    input.close();
    data.close();
}

void   BitcoinExchange::showListDatabase()
{

}

std::pair<std::string, float> splitSS(std::string str, std::string sep)
{
    std::stringstream    ss(str);
    std::string          word;
    while (!ss.eof()){
        std::getline(ss,  word, (char *)sep.c_str());
    }
}