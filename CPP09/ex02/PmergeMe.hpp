/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:49 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/15 02:16:11 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector> 

class PmergeMe
{
    private:
        std::vector<int>    vect;
    public:
        PmergeMe(char *arr);
        ~PmergeMe();
        void    insertSort(std::vector<int> vect);
};

#endif