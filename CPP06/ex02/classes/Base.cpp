/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:22:22 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/17 23:41:05 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
Base::~Base(){}
A::~A(){}
B::~B(){}
C::~C(){}

Base* generate(void)
{
	int number = rand() % 3 + 1;
	switch (number)
	{
		case 1: 
			return (new A());
		case 2:
			return (new B());
		case 3:
			return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "type of object form pointer p: A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "type of object form pointer p: B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "type of object form pointer p: C\n";
}

void identify(Base& p)
{
	try
	{
		if (dynamic_cast<A*>(&p) != NULL)
			std::cout << "type of object form pointer p: A\n";
		else if (dynamic_cast<B*>(&p) != NULL)
			std::cout << "type of object form pointer p: B\n";
		else if (dynamic_cast<C*>(&p) != NULL)
			std::cout << "type of object form pointer p: C\n";
	}
	catch (std::exception e)
	{
		std::cout << e.what() << "\n";
	}
}