/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:49 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/16 02:12:58 by ababouel         ###   ########.fr       */
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
        std::vector<int>    vect;
        std::stringstream   ss;
    public:
        PmergeMe(char **arr);
        ~PmergeMe();
        void    insertSort();
        bool    isNum(std::string str);
};

#endif