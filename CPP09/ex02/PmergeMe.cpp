/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/16 03:20:53 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **arr)
{
    std::string var;
    
    for (int x = 1; arr[x] != NULL ; x++)
    {
        ss << arr[x];
        ss << " ";
    }
    while (std::getline(ss, var, ' '))
    {
        if (!var.empty())
        {
            if (var[0] != '-' && isNum(var))
                vect.push_back(std::stoi(var));
            else
                throw std::runtime_error("Error\n");       
        }
    }
}

PmergeMe::~PmergeMe() {}

void    PmergeMe::insertSort()
{
    int temp;
    std::cout <<"array unsorted => ";
    for(size_t x = 0 ; x < vect.size(); x++)
        std::cout << vect[x] << " ";
    std::cout <<"\n";
    for (int x = vect.size(); x > 0; x--)
    {
        for (int y =(vect.size()); y > 0; y--)
        {
            if (vect[y] < vect[x])
            {
                temp = vect[y];
                vect[y] = vect[x];
                vect[x] = temp;
            }
        }
    }
    std::cout <<"array sorted => ";
    for(size_t x = 0 ; x < vect.size(); x++)
        std::cout << vect[x] << " ";
    std::cout <<"\n";
}

void    PmergeMe::mergeSort()
{
    size_t n = vect.size() / 2;
    if (n > 5)   
}


bool    PmergeMe::isNum(std::string str)
{
    std::string::iterator it = str.begin();
    while (it != str.end())
    {
        if (!std::isdigit(*it))
            return (false);
        it++;
    }
    return (true);
}