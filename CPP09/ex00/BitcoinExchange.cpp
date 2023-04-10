/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:28:38 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/10 02:16:50y ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(char* nameFile)
{
    std::stringstream ss;
    
    this->input.open(nameFile);
    this->data.open("data.csv");
    ss << this->data.rdbuf();
    splitSS(ss);
}

BitcoinExchange::~BitcoinExchange()
{
    input.close(); 
    data.close();
}

void   BitcoinExchange::showListDatabase()
{
    dBIter = dataBase.begin();
    while (dBIter != dataBase.end())
    {
        std::cout << dBIter->first << " => " << dBIter->second << std::endl;
        dBIter++;
    } 
}

void    BitcoinExchange::splitSS(std::stringstream& str)
{
  
    std::string word;
    std::getline(str,word);
    
    while (!str.eof()) {
        std::getline(str, word);
        injectDate(word, dbDate, ',');
        if (dbDate.date != "NULL" && dbDate.exchange != -1)
            dataBase[dbDate.date] = dbDate.exchange;
    }
}

void  injectDate(std::string word,date_type& date, char sep)
{
    int index;
    
    index = word.find(sep);
    if (word.substr(0,index).length() > 0)
        date.date = word.substr(0,index);
    else
        date.date = "NULL";
    if (word.substr(index + 1).length() > 0)
        date.exchange = std::stof(word.substr(index + 1));
    else
        date.exchange = -1;
}


void    BitcoinExchange::processInput(std::string word)
{
    size_t  index;
    float   number;
    
    index = word.find('|');
    if (index != word.npos || word.substr(index + 1).length() > 0)
    {
        
        if (num)
        ipDate.date = word.substr(0 , index);
        ipDate.exchange = std::stof(word.substr(index + 1));
    }
    else
        throw std::runtime_error("Error: bad input => " + word + "\n");
}

void    BitcoinExchange::showResult()
{
    std::stringstream   ssIn;
    std::string         word;
    
    ssIn << this->input.rdbuf();
    std::getline(ssIn, word);
    while (!ssIn.eof())
    {
        std::getline(ssIn, word);
    }
}

float   exchangeResult(float input, float data)
{
    float result;
    result  = input * data;
    return (result);
}