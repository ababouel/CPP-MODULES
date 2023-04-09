/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:28:38 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/09 03:13:44 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(char* nameFile)
{
    std::string str;
    std::stringstream ss;
    
    this->input.open(nameFile);
    this->data.open("data.csv");
    ss << this->data.rdbuf();
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
    (void) sep;
    std::string word;
    std::getline(str,word);
    while (!str.eof()) {
        std::getline(str, word);
        date.date = 
        
        date.exchange = std::stof(word);
        dataBase[date.date] = date.exchange;
        std::cout << date.date << " -> " << date.exchange << std::endl;
    }
    // std::map<std::string, float>::iterator iter = dataBase.find("2011-05-08");
    // std::cout << iter->first << " -> " << iter->second << std::endl;
}