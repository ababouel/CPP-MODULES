/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:28:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/08 03:10:25 by ababouel         ###   ########.fr       */
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
        BitcoinExchange();
        BitcoinExchange(std::string nameFile);
        ~BitcoinExchange();
		void	showListDatabase();
        void    splitSS(std::stringstream& str, char sep);
};

#endif