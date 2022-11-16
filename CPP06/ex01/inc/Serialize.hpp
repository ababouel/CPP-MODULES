/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:54:47 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/16 23:26:34 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

struct Data
{
	
};

uintptr_t	serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif