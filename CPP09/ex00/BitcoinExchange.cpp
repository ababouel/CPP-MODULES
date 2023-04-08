/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:28:38 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/08 03:16:22 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string nameFile)
{
    std::string str;
    std::stringstream ss;
    this->input.open(nameFile);
    this->data.open("data.csv");
    ss << this->data.rdbuf();
    std::cout << ss.str() << std::endl; 
    std::cout << "end!!!!!!!" << std::endl; 
    splitSS(ss, ',');
}

BitcoinExchange::~BitcoinExchange()
{
    input.close();
    data.close();
}

void   BitcoinExchange::showListDatabase()
{
    
}

void    BitcoinExchange::splitSS(std::stringstream& str, char sep)
{
    std::string         word;
    std::getline(str,word);
    while (!str.eof()) {
        std::getline(str, word, sep);
        std::cout << word << std::endl; 
    }
}