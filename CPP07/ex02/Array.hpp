/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:06:41 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/19 20:23:09 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>


template < typename T>
class Array
{
	private:
		size_t	size;
		T*		type;
	public:
		Array();
		Array(int n);
		Array(const Array<T>	&array);
		Array<T>& operator=(const Array<T>	&array);
		~Array();
		
		T&			operator [](size_t index) const;
		size_t		sizeft() const;
};

template < typename T>
Array<T>::Array(): size(0), type(NULL){}

template < typename T>
Array<T>::Array(int size)
{
	if (size < 1)
		throw std::out_of_range("the size is negative");
	this->size = size;
	this->type = new T[size]();
}

template < typename T>
Array<T>::Array(const Array<T>	&array)
{
	type = NULL;
	*this = array;
}

template < typename T>
Array<T>& Array<T>::operator=(const Array<T>	&array)
{
	if (this->type)
		delete [] this->type;
	this->size = array.size;
	this->type = new T[this->size]();
	for (size_t i = 0; i < this->size; i++)
		this->type[i] = array.type[i];
	return (*this);
}

template < typename T>
Array<T>::~Array()
{
	if (this->type)
		delete [] this->type;
}

template < typename T>
T&	Array<T>::operator [](size_t index) const
{
	if (index >= this->size)
		throw std::out_of_range("index out of range");
	return (this->type[index]);
}

template < typename T>
size_t		Array<T>::sizeft() const
{
	return (this->size);
}

#endif