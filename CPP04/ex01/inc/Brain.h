/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:03:17 by abdelghani        #+#    #+#             */
/*   Updated: 2022/10/31 18:11:54 by abdelghani       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain(void);
        Brain(const Brain &brain);
        Brain& operator=(const Brain &brain);
        ~Brain(); 
};

#endif