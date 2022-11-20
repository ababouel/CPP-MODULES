/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:47:53 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/20 23:22:43 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"



Span::Span(): N(0), ls(NULL){}

Span::Span(unsigned int N) : N(N)
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
		if (this->ls->size() == this->N)
			throw std::out_of_range("the list has reached the limit !!!");
		this->ls->push_back(number);
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << "\n";
	}
}

void	Span::addListNumbers(int* numbers, unsigned int size)
{
	if (this->N < size)
		throw std::out_of_range("the list of int are greater than the limit of list !!!");
	this->ls->assign(numbers, numbers + N);
}

int	Span::shortestSpan()	const
{
	if (N == 0 || N == 1)
		throw std::out_of_range("the list of int are greater than the limit of list !!!");
	std::sort(this->ls->begin(), this->ls->end());
	std::vector<int> a[N - 1];
	for (unsigned int x = 0; x < (N - 1); x++)
		a->push_back(ls->at(x + 1) - ls->at(x));
	std::sort(a->begin(),a->end());
	return(a->front());
}

int	Span::longestSpan()	const
{
	if (N == 0 || N == 1)
		throw std::out_of_range("the list have less than one or one int !!!");
	std::sort(this->ls->begin(), this->ls->end());
	return (ls->back() - ls->front());
}