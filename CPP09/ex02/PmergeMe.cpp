/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:46 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/17 22:53:34 by ababouel         ###   ########.fr       */
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
            {
                before.push_back(std::stoi(var));
                qBefore.push_back(std::stoi(var));
            }
            else
                throw std::runtime_error("Error\n");       
        }
    }
}

PmergeMe::~PmergeMe() {}

std::vector<int>    PmergeMe::insertSort(std::vector<int> array, int n)
{
    int temp;
    int x;
    int y;
    
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
    return (array);
}

std::deque<int>    PmergeMe::insertSort(std::deque<int> array, int n)
{
    int temp;
    int x;
    int y;
    
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
    return (array);
}

std::vector<int>    PmergeMe::mergeSort(std::vector<int> array)
{
    if (array.size() <= 10)
       return  (insertSort(array, array.size()));
    int mid = array.size() / 2;
    std::vector<int> left(array.begin(),array.begin() + mid); 
    std::vector<int> right(array.begin() + mid,array.end()); 
    left = mergeSort(left);
    right = mergeSort(right); 
    return  (merge(left, right));
}

std::deque<int>    PmergeMe::mergeSort(std::deque<int> array)
{
    if (array.size() <= 10)
       return  (insertSort(array, array.size())); 
    int mid = array.size() / 2;
    std::deque<int> left(array.begin(),array.begin() + mid); 
    std::deque<int> right(array.begin() + mid,array.end()); 
    left = mergeSort(left);
    right = mergeSort(right); 
    return  (merge(left, right));
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

std::vector<int>    PmergeMe::merge(std::vector<int> left, std::vector<int> right)
{
    std::vector<int> result;

    while (left.size() > 0 && right.size() > 0)
    {
        if (left[0] < right[0])
        {
            result.push_back(left[0]);
            left.erase(left.begin());    
        }
        else
        {
            result.push_back(right[0]);
            right.erase(right.begin());       
        }
    }

    while (left.size() > 0)
    {
        result.push_back(left[0]);
        left.erase(left.begin());
    }
    
    while (right.size() > 0)
    {
        result.push_back(right[0]);
        right.erase(right.begin());
    }
    return (result);
}

std::deque<int> PmergeMe::merge(std::deque<int> left, std::deque<int> right)
{
    std::deque<int> result;

    while (left.size() > 0 && right.size() > 0)
    {
        if (left[0] < right[0])
        {
            result.push_back(left[0]);
            left.erase(left.begin());    
        }
        else
        {
            result.push_back(right[0]);
            right.erase(right.begin());       
        }
    }

    while (left.size() > 0)
    {
        result.push_back(left[0]);
        left.erase(left.begin());
    }
    
    while (right.size() > 0)
    {
        result.push_back(right[0]);
        right.erase(right.begin());
    }
    return (result);
}

void    PmergeMe::showResult()
{
    vector_startTime = std::clock();
    after = mergeSort(before);
    vector_endTime = std::clock();
    
    dque_startTime = std::clock();
    qAfter = mergeSort(qBefore);
    dque_endTime = std::clock();
    
    std::cout <<"before: ";
    for(size_t x = 0 ; x < before.size(); x++)
        std::cout << before[x] << " ";
    std::cout <<"\n";
    
    std::cout <<"after: ";
    for(size_t x = 0 ; x < after.size(); x++)
        std::cout << after[x] << " ";
    std::cout <<"\n";
}