/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:07:37 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 22:16:17 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout <<  "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"; 
}
void Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money."; 
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.";
} 

void Harl::complain(std::string level)
{
    int state = 0;
    std::string sound[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptfptr[4])() = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
    while (state < 5)
    {
        if (state < 4 && level == sound[state])
            break;
        state++;
    }
    switch (state)
    {
        case 0:
            (this->*ptfptr[state])();
            break;
        case 1:
            (this->*ptfptr[state])();
            break;
        case 2:
            (this->*ptfptr[state])();
            break;
        case 3:
            (this->*ptfptr[state])();
            break;
    }
}