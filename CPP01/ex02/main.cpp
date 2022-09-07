/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:51:38 by ababouel          #+#    #+#             */
/*   Updated: 2022/09/07 23:11:02 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout <<"&str => " << &str << std::endl; 
    std::cout << "stringPTR => " << stringPTR << std::endl; 
    std::cout << "&stringREF => "<< &stringREF << std::endl; 
    std::cout << "str => " << str << std::endl; 
    std::cout << "*stringPTR => "<<*stringPTR << std::endl; 
    std::cout << "stringREF => "<<stringREF << std::endl; 
    return (0);
}