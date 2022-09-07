/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:07:34 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 22:48:16 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main()
{
    Harl harl;
    std::cout << std::string(50, '<') << std::endl;
    harl.complain("DEBUG");
    std::cout << std::string(50, '<') << std::endl;
    harl.complain("INFO");
    std::cout << std::string(50, '<') << std::endl;
    harl.complain("ERROR");
    std::cout << std::string(50, '<') << std::endl;
    harl.complain("WARNING");
    std::cout << std::string(50, '<') << std::endl;
    harl.complain("sudsuhi");
    return (0);
}