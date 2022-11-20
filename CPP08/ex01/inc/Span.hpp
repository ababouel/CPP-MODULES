/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:21:35 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/20 04:11:33 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
	private:
		unsigned int		N;
		unsigned int		length;
		std::vector<int>*	ls;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& span);
		Span&	operator=(const Span& span);
		~Span();
		
		void	addNumber(int number);
		void 	addListNumbers(int& numbers);
		int		shortestSpan()	const;
		int		longestSpan()	const;
};

// bool	ft_comp(int i, int j);

#endif