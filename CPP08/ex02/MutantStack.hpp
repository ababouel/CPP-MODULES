/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:56:16 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/20 23:20:55 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> > 
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator		iterator;
		MutantStack(){};
		MutantStack(const MutantStack& mStack)
		{
			*this = mStack;
		};
		MutantStack& operator=(const MutantStack& mStack)
		{
			this->c = mStack.c;
			return (*this);
		};
		~MutantStack(){};
		
		iterator	begin()
		{
			return (this->c.begin());
		};
		iterator		end()
		{
			return (this->c.end());
		};
		iterator		rbegin()
		{
			return (this->c.rbegin());
		};
		iterator		rend()
		{
			return (this->c.rend());
		};
};

#endif