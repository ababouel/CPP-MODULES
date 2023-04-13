/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:55:58 by ababouel          #+#    #+#             */
/*   Updated: 2023/04/13 17:52:21 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <exception>
# include <sstream>
# include <stack>
# include <string>
# include <bits/stdc++.h>

class RPN
{
    private:
        int					op1;
        int					op2;
        std::stack<int>		st;
        std::stringstream	ss;

        bool			isNum(std::string str);
        bool			isOP(std::string str);
        void            resultOP(std::string str);
    public:
        RPN(char* args);
        ~RPN();
        void    result();
};


#endif