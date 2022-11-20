/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:47:53 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/20 04:27:49 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"



Span::Span(): N(0), length(0), ls(NULL){}

Span::Span(unsigned int N) : N(N), length(0)
{
	this->ls = new std::vector<int>[N];
}

Span::Span(const Span& span)
{
	if (this->ls)
		delete [] this->ls;
	this->ls = NULL;
	*this = span;
}

Span&	Span::operator=(const Span& span)
{
	this->N = span.N;
	this->ls = span.ls;
	return (*this);
}

Span::~Span()
{
	if(this->ls)
		delete [] this->ls;
}

void	Span::addNumber(int number)
{
	try
	{
		if (this->length == this->N)
			throw std::out_of_range("the list has reached the limit !!!");
		this->ls->push_back(number);
		this->length++;
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << "\n";
	}
}

void	Span::addListNumbers(int& numbers)
{
	try
	{
		if (this->N < (sizeof(numbers)/sizeof(int)))
			throw std::out_of_range("the list of int are greater than the limit of list !!!");
		this->ls->assign(numbers, numbers + N);
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << "\n";
	}
}

int	Span::shortestSpan()	const
{
	try
	{
		if (N == 0 || N == 1)
			throw std::out_of_range("the list of int are greater than the limit of list !!!");
		std::sort(this->ls->begin(), this->ls->end());
		
		return(*(std::min_element(ls->begin(), ls->end())));
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << "\n";
	}
	return (-1);
}

int	Span::longestSpan()	const
{
	try
	{
		if (N == 0 || N == 1)
			throw std::out_of_range("the list of int are greater than the limit of list !!!");
		std::sort(this->ls->begin(), this->ls->end());
		return (ls->back() - ls->front());
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << "\n";
	}
	return (-1);
}