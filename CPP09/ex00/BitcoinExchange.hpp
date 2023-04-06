/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:28:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/06 03:15:43 by ababouel         ###   ########.fr       */
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

class BitcoinExchange
{
    private:
        std::map<std::string, float>	dataBase;
        std::ifstream					data;
		std::ifstream					input;
    public:
        BitcoinExchange(std::string ss);
        ~BitcoinExchange();
		void	showListDatabase();
};

std::pair<std::string, float>	splitSS(std::string str, std::string sep);

#endif