/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:42 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/16 02:13:05 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **arg)
{
   try {
    if(ac > 1)
    {
        PmergeMe pm(arg);
        pm.insertSort();
    }
   }
   catch (std::exception& e) {
        std::cerr << e.what();
    }
    return (0);
}