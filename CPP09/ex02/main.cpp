/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:15:42 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/17 21:41:07 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int ac, char **arg)
{
    try {
        if(ac > 1)
        {
            PmergeMe pm(arg);
            pm.showResult();
            double cpu_time_vector = (((double) (pm.vector_endTime - pm.vector_startTime)) / CLOCKS_PER_SEC) * 60; 
            double cpu_time_dque = (((double) (pm.dque_endTime - pm.dque_startTime)) / CLOCKS_PER_SEC) * 60;
            std::cout << "Time to process a range of " << pm.after.size() << " elements with std::Vector : " << cpu_time_vector << " us\n";
            std::cout << "Time to process a range of "<< pm.qAfter.size() <<" elements with std::dque : " << cpu_time_dque << " us\n";
        }
    }
    catch (std::exception& e) {
        std::cerr << e.what();
    }
    return (0);
}