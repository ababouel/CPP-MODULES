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
        if (dbDate.date != "NULL" && dbDate.exchange != "NULL")
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
        date.exchange = word.substr(index + 1);
    else
        date.exchange = "NULL";
}


void    BitcoinExchange::processInput(std::string word)
{
    size_t  index;
    int     result;

    index = word.find('|');
    if ((result = checkResult(index, word)) == 0) {
        ipDate.date = word.substr(0 , index - 1);
        ipDate.exchange = word.substr(index + 1);
        dBIter = dataBase.lower_bound(ipDate.date);
        if ( dBIter->first != ipDate.date && dBIter != dataBase.begin())
            dBIter--;
    }
    showMessage(result, word);
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
        processInput(word);
    }
}

float   exchangeResult(std::string input, std::string   data)
{
    float result = std::stof(input) * std::stof(data);
    return (result);
}

int    BitcoinExchange::checkResult(size_t index,std::string word)
{
    
    if (checkNumSep(word) != 2 || checkInputArg(index, word))
        return (2);
    else if (std::stof(word.substr(index + 1)) < 0)
        return (1);
    else if (std::stof(word.substr(index + 1)) > 1000)
        return (3);
    else
        return (0);
}


void    BitcoinExchange::showMessage(int index, std::string word)
{
    switch(index)
    {
        case 1:
            std::cout << "Error: not a positive number.\n";
            break;
        case 2:
            std::cout << "Error: bad input => " + word.substr() + "\n";
            break;
        case 3:
            std::cout << "Error: too large a number.\n";
            break;
        case 0:
           std::cout << ipDate.date
                    << " => " << ipDate.exchange 
                    << " = " << exchangeResult(dBIter->second,ipDate.exchange) << std::endl;
            break;
    };
}

int BitcoinExchange::checkInputArg(size_t index, std::string word)
{
    std::tm date = {};
    if (index == word.npos || word.substr(index + 1).length() == 0)
        return (1);
    if (strptime(word.substr(0,index).c_str(), "%Y-%m-%d", &date) == nullptr)
        return (1);
    if ((date.tm_year + 1900) < 2009 && (date.tm_mon + 1) < 1 && date.tm_mday < 2)
        return (1);
    if (((date.tm_mon + 1) == 2 && date.tm_mday > 29)
            || (!isLeapYear(date) && (date.tm_mon + 1) == 2 && date.tm_mday > 28))
        return (1);
    return (0);
}

bool    isLeapYear(std::tm date)
{
    int year = date.tm_year + 1900;
    if (year % 4 != 0)
        return (false);
    else if (year % 100 != 0)
        return (true);
    else if (year % 400 != 0)
        return (false);
    else
        return (true);
}

int checkNumSep(std::string word)
{
    std::stringstream   ss;
    std::string         var;
    int                 num;

    num = 0;
    ss << word;
    while (getline(ss, var, '|'))
    {
        if (!var.empty())
            num++;
    }
    return (num);
}


// #check empty line 
// #check date | value if remove it 
// #2011-01-03 hdj =>  3 = 0.9