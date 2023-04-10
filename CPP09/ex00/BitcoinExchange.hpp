/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:28:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/10 02:52:22 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <exception>
# include <sstream>
# include <string>
#include <bits/stdc++.h>

struct  date_type
{
    std::string     date;
    float           exchange;
};

class BitcoinExchange
{
    private:
        date_type                               dbDate;
        date_type                               ipDate;
        std::ifstream					        data;
		std::ifstream					        input;
        std::map<std::string, float>	        dataBase;
        std::map<std::string, float>::iterator	dBIter;
    public:
        BitcoinExchange();
        BitcoinExchange(char* nameFile);
        ~BitcoinExchange();
		void	showListDatabase();
        void    splitSS(std::stringstream& str);
        void    showResult();
        void    processInput(std::string word);
};

void    injectDate(std::string word, date_type& date, char sep);
float   exchangeResult(float input, float data);

#endif