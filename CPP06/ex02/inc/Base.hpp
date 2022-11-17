/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:15:26 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/17 22:17:34 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
class Base
{
	public:
		virtual ~Base();
};

class A : public Base 
{
	~A();
};

class B : public Base 
{
	~B();
};

class C : public Base 
{
	~C();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif