/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:28:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/05 02:56:38 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <exception>

class BitcoinExchange
{
    private:
        std::map<std::string, float> input;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        int parsingInput();
};


#endif