/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:16:14 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/14 01:18:10 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** arg)
{
    try
    {
        if (ac == 2)
        {
            RPN rpn(arg[1]);
            rpn.result();
        }
        else
            throw std::runtime_error("please insert some op argument.\n");
    }
    catch (std::exception& e) {
        std::cerr << e.what();
    }
    return (1);
}