/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:20:40 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/16 20:36:45 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

void	convertDToChar(double nbr)
{
	char data = static_cast<char>(nbr);
	if (isnan(nbr))
		std::cout << "char: impossible" << "\n";
	else if (!isprint(data))
		std::cout << "char: Non displayable" << "\n";
	else
		std::cout << "char: "<< "'" << data << "'" << "\n";
}

void	convertDToInt(double nbr)
{
	if (isnan(nbr))
		std::cout << "int: impossible" << "\n";
	else if (isinf(nbr))
		std::cout << "int: "<< std::numeric_limits<int>::infinity()<< "\n";
	else
		std::cout << "int: " << static_cast<int>(nbr) << "\n";
}

void	convertToChar(int nbr)
{
	char data = static_cast<char>(nbr);
	if (isnan(nbr))
		std::cout << "char: impossible" << "\n";
	else
		std::cout << "char: "<< "'" << data << "'" << "\n";
}

void	convertToInt(int nbr)
{
	if (isnan(nbr))
		std::cout << "int: impossible" << "\n";
	else
		std::cout << "int: " << static_cast<int>(nbr) << "\n";
}

void	showFromInt(int nbr)
{
		convertToChar(nbr);
		convertToInt(nbr);
		float floater = static_cast<float>(nbr);
		double doubler = static_cast<double>(nbr);
		std::cout << std::fixed << std::setprecision(1); 
		std::cout << "float: "<< floater  << "f\n";
		std::cout << "double: "<< doubler << "\n";
}

void	showFromDouble(double nbr)
{
	convertDToChar(nbr);
	convertDToInt(nbr);
	float floater = static_cast<float>(nbr);
	std::cout << "float: "<< std::fixed << std::setprecision(1)<< floater  << "f\n";
	std::cout << "double: "<< nbr  << "\n";
}

bool isNumber(std::string s)
{
    for (size_t x = 0; x < s.size(); x++) {
        if (std::isdigit(s.at(x)) == 0)
            return false;
    }
    return true;
}