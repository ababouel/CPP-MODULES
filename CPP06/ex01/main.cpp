/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:53:02 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/17 20:08:14 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data 		data;
	uintptr_t 	value;
	
	data.name = "jack";
	data.age = 14;
	std::cout << "name: "<< data.name << " age: " << data.age << "\n";
	value = serialize(&data);
	std::cout << "value: "<< value << "\n";
	data = *deserialize(value);
	std::cout << "name: "<< data.name << " age: " << data.age << "\n";
	return (0);	
}