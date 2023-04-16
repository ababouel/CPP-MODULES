/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:49 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/16 18:05:24 by ababouel         ###   ########.fr       */
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

class PmergeMe
{
    private:
        std::stringstream   ss;
    public:
        std::vector<int>    vect;
        PmergeMe(char **arr);
        ~PmergeMe();
        void    insertSort(std::vector<int> &array, int n);
        void    mergeSort(std::vector<int> array, int begin, int end);
        void    merge(std::vector<int> array, int begin, int mid, int end);
        bool    isNum(std::string str);
};

#endif