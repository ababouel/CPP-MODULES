/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/16 18:06:37 by ababouel         ###   ########.fr       */
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

void    PmergeMe::insertSort(std::vector<int> &array, int n)
{
    int temp;
    int x;
    int y;
    std::cout <<"array unsorted => ";
    for(size_t x = 0 ; x < array.size(); x++)
        std::cout << array[x] << " ";
    std::cout <<"\n";
    for (x = 1; x < n; x++)
    {
        temp = array[x];
        y = x - 1;
        while (y >= 0 && array[y] > temp)
        {
            array[y + 1] = array[y];
            y = y - 1;
        }
        array[y + 1] = temp;
    }
    std::cout <<"array sorted => ";
    for(size_t x = 0 ; x < array.size(); x++)
        std::cout << array[x] << " ";
    std::cout <<"\n";
}

void    PmergeMe::mergeSort(std::vector<int> array, int begin, int end)
{
    int mid = (begin + end) / 2;
    if (begin < end )
    {
        if ((end - begin) > 5)
        {
            mergeSort(array, begin, mid);
            mergeSort(array, mid + 1, end); 
        }
        merge(array, begin, mid, end);
    }
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

void    PmergeMe::merge(std::vector<int> array, int begin , int mid, int end)
{
    
    std::vector<int> temp1;
    std::vector<int> temp2;
    
    for (int x = begin; x < mid; x++)
        temp1.push_back(array[x]);
    for (int x = mid + 1; x < end; x++)
        temp2.push_back(array[x]);
    insertSort(temp1, temp1.size());
    insertSort(temp2, temp2.size());

    
    // std::vector<int> array;
    
    // while()    
}