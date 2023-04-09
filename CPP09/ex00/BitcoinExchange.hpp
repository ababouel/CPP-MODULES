/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:28:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/09 02:49:29 by ababouel         ###   ########.fr       */
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
        std::map<std::string, float>	dataBase;
        std::ifstream					data;
		std::ifstream					input;
        date_type                            date;
    public:
        BitcoinExchange();
        BitcoinExchange(char* nameFile);
        ~BitcoinExchange();
		void	showListDatabase();
        void    splitSS(std::stringstream& str, char sep);
};

#endif