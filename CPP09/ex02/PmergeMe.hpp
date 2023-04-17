/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:49 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/17 03:02:12 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque> 
# include <iostream>
# include <exception>
# include <sstream>
# include <string>
# include <bits/stdc++.h>
# include <time.h>

class PmergeMe
{
    private:
        std::stringstream   ss;
        std::vector<int>    before;
        std::deque<int>     qBefore;
    public:
        std::vector<int>    after;
        std::deque<int>     qAfter;
        clock_t             vector_startTime;
        clock_t             vector_endTime;
        clock_t             dque_startTime;
        clock_t             dque_endTime;
        PmergeMe(char **arr);
        ~PmergeMe();
        std::vector<int>    insertSort(std::vector<int> array, int n);
        std::vector<int>    mergeSort(std::vector<int> array);
        std::vector<int>    merge(std::vector<int> left, std::vector<int> right);
        std::deque<int>     insertSort(std::deque<int> array, int n);
        std::deque<int>     mergeSort(std::deque<int> array);
        std::deque<int>     merge(std::deque<int> left, std::deque<int> right);
        bool                isNum(std::string str);
        void                showResult();
};

#endif