/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:02:26 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/16 20:34:31 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <math.h>

void	convertDToChar(double nbr);
void	convertDToInt(double nbr);
void	convertToChar(int nbr);
void	convertToInt(int nbr);
void	showFromInt(int nbr);
void	showFromDouble(double nbr);
bool	isNumber(std::string s);

#endif